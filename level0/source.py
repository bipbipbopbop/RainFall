#!/bin/python
import os
import sys


if int(sys.argv[1]) == 0x1a7:
    arg = "/bin/sh"
    gid = os.getegid()
    uid = os.geteuid()
    os.setresgid(gid, gid, gid)
    os.setresuid(uid, uid, uid)
    os.execv("/bin/sh", [arg])
else:
    print("No !")
