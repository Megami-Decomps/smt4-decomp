/* NON_MATCHING: rename polling stack grouping and callback scheduling have not yet been matched. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "gfx/EffectKeyboard.h"

struct NamedObject;
struct RenameTextBuffers {
    char fullName[50];
    char shortName[50];
    s32 result;
    char message[100];
};
extern "C" {
s32 FUN_00375ec8(KeyboardState *keyboard);
void namedObjectFormatFullName(NamedObject *object, char *destination);
s32 namedObjectFormatName(NamedObject *object, char *destination);
void engineFreeCallback(void *allocation);
s32 textFormatBuffer(char *destination, const char *format, ...);
s32 resourceDefaultFalseCallback(void *object, const char *path);
__weak void effectEditorPublishDebugText(void *object, const char *text);

// Run the effect-name keyboard and publish the completed rename to the editor.
u32 FUN_002feb40()
{
    RenameTextBuffers text;
    u32 status = 0x400001;
    const char *directory = "effect_editor/ep/";
    if (g_effectEditor.label == NULL) {
        EffMenuNode *node = effMenuNodeCreate(".EP");
        g_effectEditor.label = node;
        node->initialKind = 0xb6;
        node->unk04 = 100;
    } else {
        FUN_00375ec8(reinterpret_cast<KeyboardState *>(g_effectEditor.label));
        namedObjectFormatFullName(reinterpret_cast<NamedObject *>(g_effectEditor.label), text.fullName);
        namedObjectFormatName(reinterpret_cast<NamedObject *>(g_effectEditor.label), text.shortName);
        text.result = reinterpret_cast<KeyboardState *>(g_effectEditor.label)->mode;
        if (text.result == 1) {
            if (!resourceDefaultFalseCallback(g_effectEditor.label, directory)) {
                text.result = 0;
                return status;
            }
        }
    }
    if (text.result == 0)
        return status;
    engineFreeCallback(g_effectEditor.label);
    g_effectEditor.label = NULL;
    if (text.result == 2)
        return 0x400000;
    if (text.result == 1 && g_effectEditor.selection.block != NULL) {
        textFormatBuffer(text.message, "%s%s", directory, text.fullName);
        effectEditorPublishDebugText(g_effectEditor.selection.block, text.message);
        status = 0x400002;
    }
    return status;
}
}
