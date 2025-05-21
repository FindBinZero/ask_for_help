use crate::{controllaw::Controllaw, foc::Foc, res::Res};

// let mut m = motor2::Motor2 {
//     control_law: None,
//     current_control: Default::default(),
//     res_control: Default::default(),
// };
// m.arm(&mut m.current_control);
pub struct Motor2<'s> {
    pub control_law: Option<&'s mut dyn Controllaw>,
    pub current_control: Foc,
    pub res_control: Res,
}
impl<'s> Motor2<'s> {
    pub fn update(&mut self) {
        if let Some(c) = self.control_law.as_mut() {
            c.update();
        }
    }

    pub fn arm(&mut self, c: &'s mut dyn Controllaw) {
        self.control_law = Some(c)
    }

    pub fn disarm(&mut self) {
        self.control_law = None;
    }
}
