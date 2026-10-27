extern "C" {

void titleDbgBgStop(void);

/* Runs titleDbgBgStop (placed right after, so the call is a linker NOP). */
void titleDbgBgStopThunk(void)
{
    titleDbgBgStop();
}

} /* extern "C" */
