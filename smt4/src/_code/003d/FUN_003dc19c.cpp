/* NON_MATCHING: retail spills battle state and retains path pointers, adding 16 bytes to the stack frame. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match6_ActionController.h"
#include "code/Code0033.h"

extern "C" {
char *libc_strcpy(char *destination, const char *source);
void memClear(void *destination, u32 size);
void asdMemFree(void *memory);
void textFormatBuffer(char *destination, const char *format, ...);
char *FUN_002522e0(char *path, u32 separator);
u32 keyedRecordFindByName(const char *name);
void asdLoadFileAsyncSimple(const char *path, void **destination, s32 flags);
extern const char DAT_004008c4[];

/* Resolve each sequence effect's file name and request uncached files asynchronously. */
u32 FUN_003dc19c(ActionController *controller)
{
    struct EffectDescriptor { u32 id, unk04; };
    struct SequenceEffectView {
        u8 prefix[0x7c];
        EffectDescriptor effects[3];
    };
    struct EffectLoad {
        u8 cacheIndex;
        u8 unk01[3];
        void *file;
        char name[128];
        u8 flags;
        u8 unk89[3];
    };
    // The loading slots extend beyond the canonical action-controller prefix.
    struct ControllerLoadView {
        u8 prefix[0x3070];
        EffectLoad effects[3];
    };
    typedef char EffectLoadLayout[sizeof(EffectLoad) == 0x8c &&
        offsetof(EffectLoad, flags) == 0x88 ? 1 : -1];
    BtlMainState *state = btlGetMainState();
    ControllerLoadView *loads = reinterpret_cast<ControllerLoadView *>(controller);
    for (s32 index = 0; index < 3; ++index) {
        char effectName[16] = {};
        const char *description = reinterpret_cast<const char *>(FUN_003397b8(state,
            reinterpret_cast<SequenceEffectView *>(controller->sequence)->effects[index].id));
        libc_strcpy(effectName, description + 4);
        EffectLoad *load = &loads->effects[index];
        load->cacheIndex = 0xff;
        memClear(load->name, sizeof(load->name));
        if (load->file != NULL) {
            asdMemFree(load->file);
            load->file = NULL;
        }
        load->flags = 0;
        char path[128];
        char formatted[128];
        memClear(path, sizeof(path));
        memClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_004008c4, effectName);
        libc_strcpy(path, formatted);
        char *separator = FUN_002522e0(path, '/');
        libc_strcpy(load->name, separator + 1);
        if (keyedRecordFindByName(load->name) == 0xff) {
            asdLoadFileAsyncSimple(path, &load->file, 0);
            load->flags |= 1;
        }
    }
    return 1;
}
}
