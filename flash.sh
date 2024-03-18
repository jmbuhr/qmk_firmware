#!/bin/env bash

qmk json2c ./keyboards/beekeeb/piantor/keymaps/jmbuhr/jmbuhr.json > ./keyboards/beekeeb/piantor/keymaps/jmbuhr/keymap.c
qmd compile
qmk flash
