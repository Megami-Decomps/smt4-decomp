#!/usr/bin/env python3
"""Fetch pinned build tools into build/tools/, verifying every byte.

Reads a manifest (config/toolchain.json: the versioned table romwright wrote
for this project; see docs/new-project.md) and installs the tools a project
needs. Nothing is trusted on download: the sha256 of each asset is checked
*before* it is extracted or made executable, a mismatch deletes the file and
stops the build, and archive members cannot escape the install directory.

Standard library only. `file://` URLs are accepted so a project can be built
offline from tools you already hold (the manifest says where each came from).

    python3 tools/download_tool.py ID [ID...] [--manifest FILE] [--dest DIR]
"""
import argparse
import hashlib
import json
import os
import platform
import shutil
import stat
import sys
import tarfile
import tempfile
import urllib.request
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def host_keys():
    """Asset keys this machine can use, most specific first."""
    system = platform.system().lower()
    machine = platform.machine().lower()
    machine = {"amd64": "x86_64", "arm64": "arm64", "aarch64": "aarch64"}.get(machine, machine)
    system = {"darwin": "macos"}.get(system, system)
    keys = [f"{system}-{machine}"]
    if system == "macos":
        keys.append("macos-universal")
    keys.append("any")
    return keys


def sha256_file(path):
    digest = hashlib.sha256()
    with open(path, "rb") as handle:
        for block in iter(lambda: handle.read(1 << 20), b""):
            digest.update(block)
    return digest.hexdigest()


def pick_asset(tool):
    for key in host_keys():
        if key in tool["assets"]:
            return key, tool["assets"][key]
    raise SystemExit(
        f"{tool['id']}: no asset for this machine ({host_keys()[0]}); "
        f"the manifest lists: {', '.join(sorted(tool['assets']))}. "
        "Supply your own with a toolchain profile (see README.md)."
    )


def download(url, dest):
    request = urllib.request.Request(url, headers={"User-Agent": "romwright-project/1"})
    with urllib.request.urlopen(request, timeout=120) as response, open(dest, "wb") as out:
        shutil.copyfileobj(response, out, 1 << 20)


def safe_extract_tar(archive, dest):
    root = os.path.realpath(dest)
    for member in archive.getmembers():
        target = os.path.realpath(os.path.join(dest, member.name))
        if target != root and not target.startswith(root + os.sep):
            raise SystemExit(f"refusing archive member outside the install dir: {member.name}")
        if member.issym() or member.islnk():
            link = os.path.realpath(os.path.join(os.path.dirname(target), member.linkname))
            if not link.startswith(root + os.sep) and link != root:
                raise SystemExit(f"refusing archive link outside the install dir: {member.name}")
    archive.extractall(dest)


def safe_extract_zip(archive, dest, include=()):
    """`include`: member path prefixes to extract (all when empty)."""
    root = os.path.realpath(dest)
    names = [n for n in archive.namelist() if not include or any(n.startswith(p) for p in include)]
    for name in names:
        target = os.path.realpath(os.path.join(dest, name))
        if target != root and not target.startswith(root + os.sep):
            raise SystemExit(f"refusing archive member outside the install dir: {name}")
    archive.extractall(dest, members=names)
    for info in archive.infolist():
        mode = info.external_attr >> 16
        if info.filename in names and mode & 0o111:
            os.chmod(os.path.join(dest, info.filename), mode & 0o777)


def install(tool, dest_root, cache):
    key, asset = pick_asset(tool)
    install_dir = Path(dest_root) / tool["id"]
    stamp = install_dir / ".verified"
    if stamp.exists() and stamp.read_text().strip() == asset["sha256"]:
        return install_dir
    cache.mkdir(parents=True, exist_ok=True)
    blob = cache / asset["sha256"]
    if not blob.exists() or sha256_file(blob) != asset["sha256"]:
        print(f"download {tool['id']} {tool['version']} <- {asset['url']}", flush=True)
        part = blob.with_suffix(".part")
        download(asset["url"], part)
        got = sha256_file(part)
        if got != asset["sha256"]:
            part.unlink()
            raise SystemExit(
                f"{tool['id']}: sha256 mismatch for {asset['url']}\n  expected {asset['sha256']}\n  got      {got}\n"
                "The pinned bytes changed upstream (or the download was tampered with); nothing was installed."
            )
        part.replace(blob)
    if install_dir.exists():
        shutil.rmtree(install_dir)
    install_dir.mkdir(parents=True)
    kind = asset["archive"]
    if kind == "raw":
        name = (tool.get("provides") or {}).get(tool["id"]) or tool["id"]
        if asset["url"].lower().endswith(".exe") and not name.lower().endswith(".exe"):
            name += ".exe"  # Windows runs a file by its extension
        target = install_dir / name
        shutil.copyfile(blob, target)
        target.chmod(target.stat().st_mode | stat.S_IXUSR | stat.S_IXGRP | stat.S_IXOTH)
    elif kind in ("tar.gz", "tar.xz"):
        with tarfile.open(blob) as archive:
            safe_extract_tar(archive, install_dir)
    elif kind == "zip":
        with zipfile.ZipFile(blob) as archive:
            safe_extract_zip(archive, install_dir, asset.get("include") or ())
    else:
        raise SystemExit(f"{tool['id']}: unknown archive kind {kind!r}")
    stamp.write_text(asset["sha256"] + "\n")
    return install_dir


def load_manifest(path):
    manifest = json.loads(Path(path).read_text())
    if manifest.get("schema") != 1:
        raise SystemExit(f"{path}: unsupported manifest schema {manifest.get('schema')!r}")
    return {tool["id"]: tool for tool in manifest["tools"]}


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("ids", nargs="+")
    parser.add_argument("--manifest", default=str(ROOT / "config" / "toolchain.json"))
    parser.add_argument("--dest", default=str(ROOT / "build" / "tools"))
    args = parser.parse_args(argv)
    tools = load_manifest(args.manifest)
    cache = Path(args.dest) / ".cache"
    for tool_id in args.ids:
        if tool_id not in tools:
            raise SystemExit(f"{tool_id}: not in {args.manifest}")
        print(install(tools[tool_id], args.dest, cache))


if __name__ == "__main__":
    main()
