/*
    Copyright (C) 2012 Modelon AB

    This program is free software: you can redistribute it and/or modify
    it under the terms of the BSD style license.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    FMILIB_License.txt file for more details.

    You should have received a copy of the FMILIB_License.txt file
    along with this program. If not, contact Modelon AB <http://www.modelon.com>.
*/

/*
    Type fmi3_import_dimension_list_t is necessary because we don't expose
    jm_vector(X) structures in the API.
*/


/** \file fmi3_import_dimension_list.h
*  \brief Public interface to the FMI XML C-library. Handling of dimension lists.
*/

#ifndef FMI3_IMPORT_DIMENSIONLIST_H_
#define FMI3_IMPORT_DIMENSIONLIST_H_

#include "fmilib_config.h"
#include "FMI3/fmi3_xml_dimension.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TODO: most of the import types are opaque, but fmi3_import_dimension_t is not, do I have to do it, and if yes, how do I do it? */
typedef struct fmi3_xml_dimension_t fmi3_import_dimension_t;

/** \brief Checks if the dimension contains the valueReference attribute */
FMILIB_EXPORT int fmi3_import_get_dimension_has_vr(fmi3_import_dimension_t*);

/** \brief Checks if the dimension contains the start attribute */
FMILIB_EXPORT int fmi3_import_get_dimension_has_start(fmi3_import_dimension_t*);

/** \brief Get the start value of the dimension */
FMILIB_EXPORT int fmi3_import_get_dimension_start(fmi3_import_dimension_t*);

/** \brief Get the valueReference of the dimension */
FMILIB_EXPORT fmi3_value_reference_t fmi3_import_get_dimension_vr(fmi3_import_dimension_t*);

#ifdef __cplusplus
}
#endif

#endif /* FMI3_IMPORT_DIMENSIONLIST_H_ */
