/* NON_MATCHING: 10 lines, all in the last register write (0 to 0x100E0): retail loads the command word before the count update and the zero after it, the build sets the zero first. */
#include "shard/W6_W6Match6_ItemIcon.h"
#include "common.h"
#include "gfx/ModelShader.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match3_NameFormState.h"

namespace {
/* unit-local: the four reset command words this function copies to the stack and submits */
struct ModelStateResetPacket {
    u32 values[4];
};
}
extern "C" {
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
void cursorResetFromParam(void);
extern const ModelStateResetPacket DAT_00410668;
u32 *FUN_002b5cf0(NativeShaderPrefix *shader, u32 *cursor);
void gpuSubmitCommandBlock(const u32 *commands, u32 bytes, u32 mode);

/* Appends one GPU register write (the parameter word, then the command header naming the
 * register) to the model command block. */
static __inline void modelCmdPutRegister(u32 value, u32 command)
{
    g_modelCommandBuffer[g_modelCommandWordCount] = value;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = command;
    g_modelCommandWordCount += 2;
}

/* Emits the shader's command block and restores the shared shader and draw-state registers. */
void modelShaderCommitCommands(ModelShader *owner)
{
    u32 *cursor = (u32 *)asdGxGetCommandCursor();
    u32 begin = (u32)cursor;
    u32 *end = FUN_002b5cf0(&owner->shader, cursor);
    asdModelAdvanceCommandCursorBetween(begin, (u32)end);
    cursorResetFromParam();
    modelCmdPutRegister(0x210, 0xF02BB);
    modelCmdPutRegister(0, 0xF02BC);
    asdModelCommandBlockRelease();
    ModelStateResetPacket reset = DAT_00410668;
    gpuSubmitCommandBlock(reset.values, sizeof(reset), 1);
    cursorResetFromParam();
    modelCmdPutRegister(1, 0xF0111);
    modelCmdPutRegister(1, 0xF0110);
    modelCmdPutRegister(0, 0x100E0);
    asdModelCommandBlockRelease();
}
}
