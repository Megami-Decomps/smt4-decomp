/* Runs FUN_0013c1fc and touchInputUpdate, then accelerometerUpdate (placed right after, so the last call is a linker NOP). */
extern "C" {
void FUN_0013c1fc(void);
void touchInputUpdate(void);
void accelerometerUpdate(void);

void FUN_00140ba4(void)
{
    FUN_0013c1fc();
    touchInputUpdate();
    accelerometerUpdate();
}
}
