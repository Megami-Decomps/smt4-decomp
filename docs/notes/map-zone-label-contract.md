# Map zone labels and scene-pose access

The table-0x2c/subtable-2 accessor returns a pointer to a fixed 0x20-byte
zone-label string. The zone lookup returns that same stored pointer, and its
UI caller passes it to the existing string-copy routine. `MapZoneLabels.h`
records this const-char pointer contract without exporting a typed global
that would conflict with the producer's still-raw storage representation.

The UI caller snapshots the scene's X/Z coordinates before the later lookup;
the two floating arguments were missing from the draft. The scene-pose getter
also now has one consistent pointer-return declaration. Its five native
callers pass the address of their two-byte player-handle field. The getter
currently ignores that argument, which does not establish a void signature.
No other scene/navigation API migration is included.

The large collision producer retains its existing NON_MATCHING draft. Only
its accessor declaration and explicit pointer-to-existing-integer-temporary
boundary change here; the private giant rewrite is not included.

Against the wave42 merge: 85 affected public units, 83 unchanged, discovery
improved 860 to 857 diagnostic differences, UI caller 676 to 682 after
restoring the native float arguments. All 38 exact units are preserved, with
no new compile failures. The accessor, zone lookup and scene getter were
already exact and remain exact; this adds no newly matched functions.

Full SMT4 pinned-compiler rebuild: 10889/10890, only the inherited Linux
compiler failure in FUN_002aa790. Matched relink is byte-identical to retail,
with 6434 compiled functions proven. Declaration checks pass at 24543.
