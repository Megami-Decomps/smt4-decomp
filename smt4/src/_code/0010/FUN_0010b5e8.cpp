/* Runs padUpdateHeldFrames and touchInputUpdate, then accelerometerUpdate (placed right after, so the last call is a linker NOP). */
extern "C" {
void padUpdateHeldFrames(void);
void touchInputUpdate(void);
void accelerometerUpdate(void);

void FUN_0010b5e8(void)
{
    padUpdateHeldFrames();
    touchInputUpdate();
    accelerometerUpdate();
}
}
