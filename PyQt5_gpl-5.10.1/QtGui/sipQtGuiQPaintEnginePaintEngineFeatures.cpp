/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 52 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

#line 52 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"


extern "C" {static long slot_QPaintEngine_PaintEngineFeatures___hash__(PyObject *);}
static long slot_QPaintEngine_PaintEngineFeatures___hash__(PyObject *sipSelf)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QPaintEngine::PaintEngineFeatures::Int();
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QPaintEngine_PaintEngineFeatures___bool__(PyObject *);}
static int slot_QPaintEngine_PaintEngineFeatures___bool__(PyObject *sipSelf)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPaintEngine::PaintEngineFeatures::Int() != 0);
#line 76 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngine::PaintEngineFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPaintEngine_PaintEngineFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPaintEngine::PaintEngineFeatures::Int() != a0->operator QPaintEngine::PaintEngineFeatures::Int());
#line 106 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"
            sipReleaseType(const_cast< ::QPaintEngine::PaintEngineFeatures *>(a0),sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QPaintEngine_PaintEngineFeatures, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngine::PaintEngineFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPaintEngine_PaintEngineFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPaintEngine::PaintEngineFeatures::Int() == a0->operator QPaintEngine::PaintEngineFeatures::Int());
#line 142 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"
            sipReleaseType(const_cast< ::QPaintEngine::PaintEngineFeatures *>(a0),sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QPaintEngine_PaintEngineFeatures, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QPaintEngine::PaintEngineFeatures(*sipCpp ^ a0);
#line 181 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPaintEngine::PaintEngineFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPaintEngine_PaintEngineFeatures, &a0, &a0State, &a1))
        {
             ::QPaintEngine::PaintEngineFeatures*sipRes;

            sipRes = new  ::QPaintEngine::PaintEngineFeatures((*a0 ^ a1));
            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QPaintEngine::PaintEngineFeatures(*sipCpp | a0);
#line 253 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPaintEngine::PaintEngineFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPaintEngine_PaintEngineFeatures, &a0, &a0State, &a1))
        {
             ::QPaintEngine::PaintEngineFeatures*sipRes;

            sipRes = new  ::QPaintEngine::PaintEngineFeatures((*a0 | a1));
            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QPaintEngine::PaintEngineFeatures::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPaintEngine::PaintEngineFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPaintEngine_PaintEngineFeatures, &a0, &a0State, &a1))
        {
             ::QPaintEngine::PaintEngineFeatures*sipRes;

            sipRes = new  ::QPaintEngine::PaintEngineFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___invert__(PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___invert__(PyObject *sipSelf)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;


    {
        {
             ::QPaintEngine::PaintEngineFeatures*sipRes;

            sipRes = new  ::QPaintEngine::PaintEngineFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___int__(PyObject *);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___int__(PyObject *sipSelf)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEngine_PaintEngineFeatures(void *, int);}
static void release_QPaintEngine_PaintEngineFeatures(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipCppV);
}


extern "C" {static void assign_QPaintEngine_PaintEngineFeatures(void *, SIP_SSIZE_T, void *);}
static void assign_QPaintEngine_PaintEngineFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPaintEngine::PaintEngineFeatures *>(sipSrc);
}


extern "C" {static void *array_QPaintEngine_PaintEngineFeatures(SIP_SSIZE_T);}
static void *array_QPaintEngine_PaintEngineFeatures(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPaintEngine::PaintEngineFeatures[sipNrElem];
}


extern "C" {static void *copy_QPaintEngine_PaintEngineFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QPaintEngine_PaintEngineFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPaintEngine::PaintEngineFeatures(reinterpret_cast<const  ::QPaintEngine::PaintEngineFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *);}
static void dealloc_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPaintEngine_PaintEngineFeatures(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPaintEngine::PaintEngineFeatures *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QPaintEngine::PaintEngineFeatures();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QPaintEngine::PaintEngineFeatures(a0);

            return sipCpp;
        }
    }

    {
        const  ::QPaintEngine::PaintEngineFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPaintEngine_PaintEngineFeatures, &a0, &a0State))
        {
            sipCpp = new  ::QPaintEngine::PaintEngineFeatures(*a0);
            sipReleaseType(const_cast< ::QPaintEngine::PaintEngineFeatures *>(a0),sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QPaintEngine_PaintEngineFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPaintEngine_PaintEngineFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QPaintEngine::PaintEngineFeatures **sipCppPtr = reinterpret_cast< ::QPaintEngine::PaintEngineFeatures **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QPaintEngine::PaintEngineFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeature)) ||
            sipCanConvertToType(sipPy, sipType_QPaintEngine_PaintEngineFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeature)))
{
    *sipCppPtr = new QPaintEngine::PaintEngineFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipConvertToType(sipPy, sipType_QPaintEngine_PaintEngineFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPaintEnginePaintEngineFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPaintEngine_PaintEngineFeatures[] = {
    {(void *)slot_QPaintEngine_PaintEngineFeatures___hash__, hash_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___bool__, bool_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___ne__, ne_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___eq__, eq_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___ixor__, ixor_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___xor__, xor_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___ior__, ior_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___or__, or_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___iand__, iand_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___and__, and_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___invert__, invert_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QPaintEngine_PaintEngineFeatures, "\1QPaintEngine.PaintEngineFeatures()\n"
"QPaintEngine.PaintEngineFeatures(Union[QPaintEngine.PaintEngineFeatures, QPaintEngine.PaintEngineFeature])\n"
"QPaintEngine.PaintEngineFeatures(QPaintEngine.PaintEngineFeatures)");


static pyqt5ClassPluginDef plugin_QPaintEngine_PaintEngineFeatures = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPaintEngine_PaintEngineFeatures = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPaintEngine__PaintEngineFeatures,
        {0},
        &plugin_QPaintEngine_PaintEngineFeatures
    },
    {
        sipNameNr_PaintEngineFeatures,
        {189, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPaintEngine_PaintEngineFeatures,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPaintEngine_PaintEngineFeatures,
    init_type_QPaintEngine_PaintEngineFeatures,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QPaintEngine_PaintEngineFeatures,
    assign_QPaintEngine_PaintEngineFeatures,
    array_QPaintEngine_PaintEngineFeatures,
    copy_QPaintEngine_PaintEngineFeatures,
    release_QPaintEngine_PaintEngineFeatures,
    0,
    convertTo_QPaintEngine_PaintEngineFeatures,
    0,
    0,
    0,
    0,
    0
};
