idf_component_register(SRCS "potentiometer.cpp" "motor_controller.cpp" "hall_sensor_tachometer.cpp"
                    INCLUDE_DIRS "."
                    REQUIRES
                        esp_driver_ledc
                        esp_adc
                    PRIV_REQUIRES
                        esp_driver_gpio
)
