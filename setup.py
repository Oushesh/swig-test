'''
File: setup.py
'''

from distutils.core import setup, Extension
#put name of module here:
name = "gfg"

#version of module
version = "1.0"

#specify the name of the Extension and source files
# required to compile this.
ext_modules = Extension(name='_gfg',sources=["gfg.i","gfg.c"])
setup(name=name,version=version,ext_modules=[ext_modules])
