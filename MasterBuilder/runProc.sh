#!/bin/bash
echo Running processor...
cd ../SimulatorEnv/
time ./env $1 $2 ../MasterBuilder/bin/proc.exe ../MasterBuilder/bin/rom
