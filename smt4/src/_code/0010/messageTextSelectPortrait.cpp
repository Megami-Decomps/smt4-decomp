#include "common.h"

extern "C" {
u32 bustupCutAnimSelectSlotsById(s32 id);
u32 eventTexSelectJobsById(s32 id);
void messageSetDisplayMode(u8 mode);
void messageSetConfirmDisplayMode(void);

/* Text command 0xF87A: id 0 lets the message window follow the message kind again; any other id selects
 * the bust-up cut or event texture showing `id`, and when neither shows it sets display mode 2. */
u32 messageTextSelectPortrait(s32 id)
{
    if (id == 0) {
        messageSetConfirmDisplayMode();
    } else if (bustupCutAnimSelectSlotsById(id) == 0 && eventTexSelectJobsById(id) == 0) {
        messageSetDisplayMode(2);
    }
    return 1;
}

} /* extern "C" */
