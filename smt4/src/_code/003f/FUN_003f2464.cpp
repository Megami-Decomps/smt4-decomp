/* NON_MATCHING: large shader-channel offsets are not shared into the retail addressing bases. */
#include "shard/ShaderModule.h"
#include <stddef.h>

extern "C" {
extern u8 DAT_00420a14;
extern ShaderModuleCounters DAT_00433dd0;
extern ShaderModule DAT_0047e54c;
extern u8 entry;
ShaderModuleStorage *nn_gr_CTR_Shader_Shader_sub_object(ShaderModuleStorage *storage);
void FUN_0034dd48(void *module);
s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);

// Initialize the global shader module and register its shutdown callback.
s32 FUN_003f2464(u32 first, u32 second, ShaderModuleContext *context)
{
    context->first = first;
    context->second = second;
    DAT_00433dd0.first = 0;
    DAT_00433dd0.second = 0;
    DAT_0047e54c.vtable = &DAT_00420a14;
    DAT_0047e54c.unk04 = 0;
    ShaderModuleStorage *storage = nn_gr_CTR_Shader_Shader_sub_object(&DAT_0047e54c.shader);
    storage->channels[0].unk00 = 0;
    storage->channels[0].unk01 = 2;
    storage->channels[0].unk02 = 0xff;
    storage->channels[0].unk03 = 0xff;
    storage->channels[0].unk04 = 0;
    storage->channels[1].unk00 = 0;
    storage->channels[1].unk01 = 2;
    storage->channels[1].unk02 = 0xff;
    storage->channels[1].unk03 = 0xff;
    storage->channels[1].unk04 = 0;
    ShaderModule *module = reinterpret_cast<ShaderModule *>(
        reinterpret_cast<u8 *>(storage) - offsetof(ShaderModule, shader));
    return __aeabi_atexit(module, FUN_0034dd48, &entry);
}
}
