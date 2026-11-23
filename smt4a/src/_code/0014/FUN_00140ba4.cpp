/* Runs padUpdateHeldFrames and touchInputUpdate, then accelerometerUpdate (placed right after, so the last call is a linker NOP). */
extern "C" {
void padUpdateHeldFrames(void);
void touchInputUpdate(void);
void accelerometerUpdate(void);

void FUN_00140ba4(void)
{
    padUpdateHeldFrames();
    touchInputUpdate();
    accelerometerUpdate();
}
}
