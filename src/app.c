#include <tcl.h>

#include <stdio.h>
#include <stdlib.h>

int Tcl_AppInit(Tcl_Interp *interp)
{
    if (Tcl_Init(interp) != TCL_OK) {
        fprintf(stderr, "fail to init tcl interpreter\n");
        return TCL_ERROR;
    }

    return TCL_OK;
}

int main(int argc, char *argv[])
{
    Tcl_Main(argc, argv, Tcl_AppInit);
    return EXIT_SUCCESS;
}
