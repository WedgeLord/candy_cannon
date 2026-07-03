#include "esp_adc/adc_continuous.h"
#include <functional>


typedef std::function<void(double)> pot_callback;
class potentiometer
{
private:
    adc_continuous_handle_t adc_reader;

public:
    potentiometer(pot_callback);
    ~potentiometer();

private:
    static std::function<void(pot_callback)> data_to_level(const adc_continuous_handle_t, const adc_continuous_evt_data_t *);
};