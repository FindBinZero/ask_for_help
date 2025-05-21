use crate::{controllaw::Controllaw, foc::Foc, res::Res};

pub enum ControllawIndex {
    Current,
    Res,
}

pub struct Motor3 {
    // pub control_law: Option<&'s mut dyn Controllaw>,
    pub current_control: Foc,
    pub res_control: Res,
    controllaw_index: Option<ControllawIndex>,
}
impl Motor3 {
    pub fn update(&mut self) {
        if let Some(c) = self.controllaw_index.as_ref() {
            match c {
                ControllawIndex::Current => self.current_control.update(),
                ControllawIndex::Res => self.res_control.update(),
            }
        }
    }

    pub fn arm(&mut self, c: ControllawIndex) {
        self.controllaw_index = Some(c);
    }

    pub fn disarm(&mut self) {
        self.controllaw_index = None;
    }
}
