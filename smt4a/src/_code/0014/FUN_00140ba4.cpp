/* Runs FUN_0013c1fc and FUN_0013d33c, then accelerometerUpdate (placed right after, so the last call is a linker NOP). */
extern "C" {
void FUN_0013c1fc(void);
void FUN_0013d33c(void);
void accelerometerUpdate(void);

void FUN_00140ba4(void)
{
    FUN_0013c1fc();
    FUN_0013d33c();
    accelerometerUpdate();
}
}
