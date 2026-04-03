from setuptools import setup, Extension
import pybind11

# Behavior: This tells Python to compile your C++ file using pybind11's translation rules.
ext_modules = [
    Extension(
        "library_search",                   # The name of the module you will import in Python
        ["fast_search.cpp"],        # The file to compile
        include_dirs=[pybind11.get_include()],
        language='c++'
    ),
]

setup(
    name="library_search",
    ext_modules=ext_modules,
)