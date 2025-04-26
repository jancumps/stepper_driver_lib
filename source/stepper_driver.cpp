module;

export module stepper_driver;
export namespace stepper_driver {

class stepper_driver { // driver out of sleep as long as object in scope
public:
    virtual bool init() = 0;
    // configure microsteps / step. return false if not supported
    virtual bool microsteps(unisgned int microsteps) = 0;
    virtual void enable(bool enable) = 0;
};

} // namespace stepper_driver