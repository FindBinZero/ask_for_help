use crate::{controllaw::Controllaw, foc::Foc, res::Res};

// 需要在new motor的时候就要确认Controllaw的类型
//   let mut m: motor2::Motor2<'_, _> = motor2::Motor2 {
//         control_law: None,
//         current_control: Default::default(),
//         res_control: Default::default(),
//     };
pub struct Motor2<'s, C: Controllaw> {
    pub control_law: Option<&'s mut C>,
    pub current_control: Res,
    pub res_control: Foc,
}
impl<'s, C> Motor2<'s, C>
where
    C: Controllaw,
{
    pub fn update(&mut self) {
        if let Some(c) = self.control_law.as_mut() {
            c.update();
        }
    }

    pub fn arm(&mut self, c: &'s mut C) {
        self.control_law = Some(c)
    }

    pub fn disarm(&mut self) {
        self.control_law = None;
    }
}
