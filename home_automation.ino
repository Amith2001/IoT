#include "main.h"

#include "ldr.h"



void setup(void)
{
    init_ldr();
}

void loop(void) 
{
      brightness_control();
}
