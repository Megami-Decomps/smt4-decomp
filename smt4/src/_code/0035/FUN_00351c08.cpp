#include "common.h"

extern "C" {
void nn_cfg_CTR_Initialize(void);
bool FUN_00359f90(void);
void FUN_001467a4(void);
u32 FUN_00351ce8(void *output, const void *input);

/* Initialize the configuration service and reject unavailable or missing inputs. */
u32 FUN_00351c08(void *output, const void *input)
{
    if (input == NULL) {
        return 0xE0409FFF;
    }
    nn_cfg_CTR_Initialize();
    bool available = FUN_00359f90();
    FUN_001467a4();
    if (!available) {
        return 0xC9209F84;
    }
    return FUN_00351ce8(output, input);
}
}
