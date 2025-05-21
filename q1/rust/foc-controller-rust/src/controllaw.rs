pub trait Controllaw {
    fn reset(&mut self);
    fn update(&mut self);
    fn get_output(&mut self);
}
