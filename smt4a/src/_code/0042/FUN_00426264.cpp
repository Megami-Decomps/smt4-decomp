#include "common.h"

extern "C" {
void nn_cfg_CTR_Initialize(void);
bool FUN_004310c0(void);
void FUN_001a0eb0(void);
u32 FUN_00426344(void *output, const void *input);

/* Initialize the configuration service and reject unavailable or missing inputs. */
u32 FUN_00426264(void *output, const void *input)
{
    if (input == NULL) {
        return 0xE0409FFF;
    }
    nn_cfg_CTR_Initialize();
    bool available = FUN_004310c0();
    FUN_001a0eb0();
    if (!available) {
        return 0xC9209F84;
    }
    return FUN_00426344(output, input);
}
}
