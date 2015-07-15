//
//  main.cpp
//  pycpptest
//
//  Created by Ilya Rostovtsev on 7/14/15.
//  Copyright (c) 2015 Ilya Rostovtsev. All rights reserved.
//

#include <iostream>
#include <Python.h>

int main(int argc, const char * argv[])
{
    /// brute-force test of odot loading in embedded python:
    std::string code{ "import sys; sys.path.append('/Users/ilyaforpresident/Documents/ts/plego/libo')\n"
                      "import odot as o\n"
                      "x = o.bundle('/foo : 1, /bar : 2')\n"
                      "print(x)"
    };
    
    Py_Initialize();
    PyRun_SimpleString( code.c_str() );
    Py_Finalize();
    
    return 0;
}
