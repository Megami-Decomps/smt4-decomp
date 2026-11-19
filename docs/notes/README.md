# Notes

Each note records the retail evidence for a match whose fix went beyond the function itself: a
shared declaration, a header, an `inlined.txt` row or a data table. The general techniques are in
the [matching guide](../matching-guide.md) and the rules in [CONTRIBUTING.md](../CONTRIBUTING.md);
these notes cover single cases.

Every note opens with the same four-line header, under its title:

```markdown
- **Games:** IV, Apocalypse or both
- **Functions:** each function matched, with its game and address, and the commit it was matched in
- **Headers:** the shared headers (and configuration rows) the fix added or changed, or "none changed"
- **Twin status:** the other game's counterpart and whether it is proven or paired by `tools/shared.py`
```

A note names the commit its match landed in rather than the repository's proven totals, which
change with every wave; the twin status records the state when the header was written (`abab670c2`),
and the [progress site](https://megami-decomps.github.io/smt4-decomp/) has the current one. Host
build failures unrelated to the match link to [Troubleshooting](../troubleshooting.md#known-host-failures).

- [scissor-coordinate-packing](scissor-coordinate-packing.md): the inlined, since removed `packScissorCoordinates` helper behind the scissor setters.
- [scroll-output-contract](scroll-output-contract.md): the signed output argument of the touch-list scroll helpers.
- [unite-result-initialization](unite-result-initialization.md): fusion-result initialization and its tone getter.
- [status-resource-acquisition](status-resource-acquisition.md): the status screen's shared resource acquisition.
- [battle-resident-loader](battle-resident-loader.md): the battle loader's resident-resource steps and the script factory call.
- [battle-event-panel](battle-event-panel.md): the Apocalypse battle event panel resources.
- [map-background-archives](map-background-archives.md): asynchronous loading of the map background archives.
- [map-common-resources](map-common-resources.md): the Apocalypse shared map resources and their owners.
- [map-destination-availability](map-destination-availability.md): map destination availability and the interaction-variant argument.
- [maze-wall-autotiles](maze-wall-autotiles.md): Apocalypse maze wall auto-tiling and its writable lookup tables.
