use crate::controllaw::Controllaw;

#[derive(Debug, Default)]
pub struct Foc {
    pub i: i32,
}

impl Controllaw for Foc {
    fn reset(&mut self) {
        self.i = 0;
        println!("{}::{}", std::any::type_name::<Self>(), "reset");
    }

    fn update(&mut self) {
        self.i += 1;
        println!("{}::{}", std::any::type_name::<Self>(), "update");
    }

    fn get_output(&mut self) {
        println!("{}::{}", std::any::type_name::<Self>(), "get_output");
    }
}
