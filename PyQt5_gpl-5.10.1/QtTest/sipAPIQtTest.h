/*
 * Internal module API header file.
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

#ifndef _QtTestAPI_H
#define _QtTestAPI_H

#if !defined(Py_LIMITED_API)
#define Py_LIMITED_API
#endif

#include <sip.h>

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_MacOSXOnly
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_OpenGL
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_Py_v3
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SSL
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_X11
#define SIP_TIMELINE_Qt_5_7_1


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_QTest__QTouchEventSequence 0
#define sipName_QTest__QTouchEventSequence &sipStrings_QtTest[0]
#define sipNameNr_qWaitForWindowExposed 27
#define sipName_qWaitForWindowExposed &sipStrings_QtTest[27]
#define sipNameNr_qWaitForWindowActive 49
#define sipName_qWaitForWindowActive &sipStrings_QtTest[49]
#define sipNameNr_QTouchEventSequence 7
#define sipName_QTouchEventSequence &sipStrings_QtTest[7]
#define sipNameNr_QTest__MouseAction 70
#define sipName_QTest__MouseAction &sipStrings_QtTest[70]
#define sipNameNr_sip_simplewrapper 89
#define sipName_sip_simplewrapper &sipStrings_QtTest[89]
#define sipNameNr_QTest__KeyAction 107
#define sipName_QTest__KeyAction &sipStrings_QtTest[107]
#define sipNameNr_disconnectNotify 124
#define sipName_disconnectNotify &sipStrings_QtTest[124]
#define sipNameNr_deviceTransform 141
#define sipName_deviceTransform &sipStrings_QtTest[141]
#define sipNameNr_internal_format 157
#define sipName_internal_format &sipStrings_QtTest[157]
#define sipNameNr_aspectRatioMode 173
#define sipName_aspectRatioMode &sipStrings_QtTest[173]
#define sipNameNr_waitForEvents 189
#define sipName_waitForEvents &sipStrings_QtTest[189]
#define sipNameNr_transformMode 203
#define sipName_transformMode &sipStrings_QtTest[203]
#define sipNameNr_connectNotify 127
#define sipName_connectNotify &sipStrings_QtTest[127]
#define sipNameNr_processEvents 217
#define sipName_processEvents &sipStrings_QtTest[217]
#define sipNameNr_mouseRelease 231
#define sipName_mouseRelease &sipStrings_QtTest[231]
#define sipNameNr_MouseRelease 244
#define sipName_MouseRelease &sipStrings_QtTest[244]
#define sipNameNr_sourceRegion 257
#define sipName_sourceRegion &sipStrings_QtTest[257]
#define sipNameNr_targetOffset 270
#define sipName_targetOffset &sipStrings_QtTest[270]
#define sipNameNr_midLineWidth 283
#define sipName_midLineWidth &sipStrings_QtTest[283]
#define sipNameNr_boundingRect 296
#define sipName_boundingRect &sipStrings_QtTest[296]
#define sipNameNr_PyQt5_QtTest 309
#define sipName_PyQt5_QtTest &sipStrings_QtTest[309]
#define sipNameNr_mouseDClick 322
#define sipName_mouseDClick &sipStrings_QtTest[322]
#define sipNameNr_MouseDClick 334
#define sipName_MouseDClick &sipStrings_QtTest[334]
#define sipNameNr_MouseAction 77
#define sipName_MouseAction &sipStrings_QtTest[77]
#define sipNameNr_matchPolicy 346
#define sipName_matchPolicy &sipStrings_QtTest[346]
#define sipNameNr_customEvent 358
#define sipName_customEvent &sipStrings_QtTest[358]
#define sipNameNr_eventFilter 370
#define sipName_eventFilter &sipStrings_QtTest[370]
#define sipNameNr___delitem__ 382
#define sipName___delitem__ &sipStrings_QtTest[382]
#define sipNameNr___setitem__ 394
#define sipName___setitem__ &sipStrings_QtTest[394]
#define sipNameNr___getitem__ 406
#define sipName___getitem__ &sipStrings_QtTest[406]
#define sipNameNr_stationary 418
#define sipName_stationary &sipStrings_QtTest[418]
#define sipNameNr_mousePress 429
#define sipName_mousePress &sipStrings_QtTest[429]
#define sipNameNr_mouseClick 440
#define sipName_mouseClick &sipStrings_QtTest[440]
#define sipNameNr_MouseClick 451
#define sipName_MouseClick &sipStrings_QtTest[451]
#define sipNameNr_MousePress 462
#define sipName_MousePress &sipStrings_QtTest[462]
#define sipNameNr_keyRelease 473
#define sipName_keyRelease &sipStrings_QtTest[473]
#define sipNameNr_QSignalSpy 484
#define sipName_QSignalSpy &sipStrings_QtTest[484]
#define sipNameNr_mouseEvent 495
#define sipName_mouseEvent &sipStrings_QtTest[495]
#define sipNameNr_touchEvent 506
#define sipName_touchEvent &sipStrings_QtTest[506]
#define sipNameNr_genMipMaps 517
#define sipName_genMipMaps &sipStrings_QtTest[517]
#define sipNameNr_childEvent 528
#define sipName_childEvent &sipStrings_QtTest[528]
#define sipNameNr_timerEvent 539
#define sipName_timerEvent &sipStrings_QtTest[539]
#define sipNameNr_mouseMove 550
#define sipName_mouseMove &sipStrings_QtTest[550]
#define sipNameNr_keyClicks 560
#define sipName_keyClicks &sipStrings_QtTest[560]
#define sipNameNr_KeyAction 114
#define sipName_KeyAction &sipStrings_QtTest[114]
#define sipNameNr_operation 570
#define sipName_operation &sipStrings_QtTest[570]
#define sipNameNr_lineWidth 580
#define sipName_lineWidth &sipStrings_QtTest[580]
#define sipNameNr_directory 590
#define sipName_directory &sipStrings_QtTest[590]
#define sipNameNr_alignment 600
#define sipName_alignment &sipStrings_QtTest[600]
#define sipNameNr_MouseMove 610
#define sipName_MouseMove &sipStrings_QtTest[610]
#define sipNameNr_precision 620
#define sipName_precision &sipStrings_QtTest[620]
#define sipNameNr_keyPress 630
#define sipName_keyPress &sipStrings_QtTest[630]
#define sipNameNr_keyClick 639
#define sipName_keyClick &sipStrings_QtTest[639]
#define sipNameNr_keyEvent 648
#define sipName_keyEvent &sipStrings_QtTest[648]
#define sipNameNr_shortcut 657
#define sipName_shortcut &sipStrings_QtTest[657]
#define sipNameNr_userData 666
#define sipName_userData &sipStrings_QtTest[666]
#define sipNameNr_modifier 675
#define sipName_modifier &sipStrings_QtTest[675]
#define sipNameNr_fillRule 684
#define sipName_fillRule &sipStrings_QtTest[684]
#define sipNameNr_tabArray 693
#define sipName_tabArray &sipStrings_QtTest[693]
#define sipNameNr_tabStops 702
#define sipName_tabStops &sipStrings_QtTest[702]
#define sipNameNr_nameType 711
#define sipName_nameType &sipStrings_QtTest[711]
#define sipNameNr_position 720
#define sipName_position &sipStrings_QtTest[720]
#define sipNameNr_Shortcut 729
#define sipName_Shortcut &sipStrings_QtTest[729]
#define sipNameNr_Release 236
#define sipName_Release &sipStrings_QtTest[236]
#define sipNameNr_yMargin 738
#define sipName_yMargin &sipStrings_QtTest[738]
#define sipNameNr_xMargin 746
#define sipName_xMargin &sipStrings_QtTest[746]
#define sipNameNr_exposed 754
#define sipName_exposed &sipStrings_QtTest[754]
#define sipNameNr_buffers 762
#define sipName_buffers &sipStrings_QtTest[762]
#define sipNameNr_sources 770
#define sipName_sources &sipStrings_QtTest[770]
#define sipNameNr_quality 778
#define sipName_quality &sipStrings_QtTest[778]
#define sipNameNr_release 786
#define sipName_release &sipStrings_QtTest[786]
#define sipNameNr_timeout 794
#define sipName_timeout &sipStrings_QtTest[794]
#define sipNameNr_filters 802
#define sipName_filters &sipStrings_QtTest[802]
#define sipNameNr_options 810
#define sipName_options &sipStrings_QtTest[810]
#define sipNameNr___len__ 818
#define sipName___len__ &sipStrings_QtTest[818]
#define sipNameNr_isValid 826
#define sipName_isValid &sipStrings_QtTest[826]
#define sipNameNr_qSleep 834
#define sipName_qSleep &sipStrings_QtTest[834]
#define sipNameNr_sunken 841
#define sipName_sunken &sipStrings_QtTest[841]
#define sipNameNr_layers 848
#define sipName_layers &sipStrings_QtTest[848]
#define sipNameNr_stride 855
#define sipName_stride &sipStrings_QtTest[855]
#define sipNameNr_window 862
#define sipName_window &sipStrings_QtTest[862]
#define sipNameNr_commit 869
#define sipName_commit &sipStrings_QtTest[869]
#define sipNameNr_proper 876
#define sipName_proper &sipStrings_QtTest[876]
#define sipNameNr_signal 883
#define sipName_signal &sipStrings_QtTest[883]
#define sipNameNr_value9 890
#define sipName_value9 &sipStrings_QtTest[890]
#define sipNameNr_value8 897
#define sipName_value8 &sipStrings_QtTest[897]
#define sipNameNr_value7 904
#define sipName_value7 &sipStrings_QtTest[904]
#define sipNameNr_value6 911
#define sipName_value6 &sipStrings_QtTest[911]
#define sipNameNr_value5 918
#define sipName_value5 &sipStrings_QtTest[918]
#define sipNameNr_value4 925
#define sipName_value4 &sipStrings_QtTest[925]
#define sipNameNr_value3 932
#define sipName_value3 &sipStrings_QtTest[932]
#define sipNameNr_value2 939
#define sipName_value2 &sipStrings_QtTest[939]
#define sipNameNr_value1 946
#define sipName_value1 &sipStrings_QtTest[946]
#define sipNameNr_value0 953
#define sipName_value0 &sipStrings_QtTest[953]
#define sipNameNr_symbol 960
#define sipName_symbol &sipStrings_QtTest[960]
#define sipNameNr_suffix 967
#define sipName_suffix &sipStrings_QtTest[967]
#define sipNameNr_prefix 974
#define sipName_prefix &sipStrings_QtTest[974]
#define sipNameNr_filter 981
#define sipName_filter &sipStrings_QtTest[981]
#define sipNameNr_option 988
#define sipName_option &sipStrings_QtTest[988]
#define sipNameNr_locale 995
#define sipName_locale &sipStrings_QtTest[995]
#define sipNameNr_format 166
#define sipName_format &sipStrings_QtTest[166]
#define sipNameNr_column 1002
#define sipName_column &sipStrings_QtTest[1002]
#define sipNameNr_parent 1009
#define sipName_parent &sipStrings_QtTest[1009]
#define sipNameNr_press 1016
#define sipName_press &sipStrings_QtTest[1016]
#define sipNameNr_qWait 1022
#define sipName_qWait &sipStrings_QtTest[1022]
#define sipNameNr_Press 434
#define sipName_Press &sipStrings_QtTest[434]
#define sipNameNr_QTest 1028
#define sipName_QTest &sipStrings_QtTest[1028]
#define sipNameNr_Click 328
#define sipName_Click &sipStrings_QtTest[328]
#define sipNameNr_brush 1034
#define sipName_brush &sipStrings_QtTest[1034]
#define sipNameNr_delay 1040
#define sipName_delay &sipStrings_QtTest[1040]
#define sipNameNr_types 1046
#define sipName_types &sipStrings_QtTest[1046]
#define sipNameNr_order 1052
#define sipName_order &sipStrings_QtTest[1052]
#define sipNameNr_flags 1058
#define sipName_flags &sipStrings_QtTest[1058]
#define sipNameNr_event 1064
#define sipName_event &sipStrings_QtTest[1064]
#define sipNameNr_msecs 1070
#define sipName_msecs &sipStrings_QtTest[1070]
#define sipNameNr_state 1076
#define sipName_state &sipStrings_QtTest[1076]
#define sipNameNr_wait 1082
#define sipName_wait &sipStrings_QtTest[1082]
#define sipNameNr_move 1087
#define sipName_move &sipStrings_QtTest[1087]
#define sipNameNr_mode 1092
#define sipName_mode &sipStrings_QtTest[1092]
#define sipNameNr_name 1097
#define sipName_name &sipStrings_QtTest[1097]
#define sipNameNr_base 1102
#define sipName_base &sipStrings_QtTest[1102]
#define sipNameNr_fill 1107
#define sipName_fill &sipStrings_QtTest[1107]
#define sipNameNr_from 1112
#define sipName_from &sipStrings_QtTest[1112]
#define sipNameNr_sort 1117
#define sipName_sort &sipStrings_QtTest[1117]
#define sipNameNr_pen 1122
#define sipName_pen &sipStrings_QtTest[1122]
#define sipNameNr_pos 1126
#define sipName_pos &sipStrings_QtTest[1126]
#define sipNameNr_sw 1130
#define sipName_sw &sipStrings_QtTest[1130]
#define sipNameNr_sh 1037
#define sipName_sh &sipStrings_QtTest[1037]
#define sipNameNr_sy 1133
#define sipName_sy &sipStrings_QtTest[1133]
#define sipNameNr_sx 1136
#define sipName_sx &sipStrings_QtTest[1136]
#define sipNameNr_at 170
#define sipName_at &sipStrings_QtTest[170]

#define sipMalloc                   sipAPI_QtTest->api_malloc
#define sipFree                     sipAPI_QtTest->api_free
#define sipBuildResult              sipAPI_QtTest->api_build_result
#define sipCallMethod               sipAPI_QtTest->api_call_method
#define sipCallProcedureMethod      sipAPI_QtTest->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_QtTest->api_call_error_handler
#define sipParseResultEx            sipAPI_QtTest->api_parse_result_ex
#define sipParseResult              sipAPI_QtTest->api_parse_result
#define sipParseArgs                sipAPI_QtTest->api_parse_args
#define sipParseKwdArgs             sipAPI_QtTest->api_parse_kwd_args
#define sipParsePair                sipAPI_QtTest->api_parse_pair
#define sipInstanceDestroyed        sipAPI_QtTest->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_QtTest->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_QtTest->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_QtTest->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_QtTest->api_convert_to_void_ptr
#define sipAddException             sipAPI_QtTest->api_add_exception
#define sipNoFunction               sipAPI_QtTest->api_no_function
#define sipNoMethod                 sipAPI_QtTest->api_no_method
#define sipAbstractMethod           sipAPI_QtTest->api_abstract_method
#define sipBadClass                 sipAPI_QtTest->api_bad_class
#define sipBadCatcherResult         sipAPI_QtTest->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_QtTest->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_QtTest->api_bad_operator_arg
#define sipTrace                    sipAPI_QtTest->api_trace
#define sipTransferBack             sipAPI_QtTest->api_transfer_back
#define sipTransferTo               sipAPI_QtTest->api_transfer_to
#define sipTransferBreak            sipAPI_QtTest->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_QtTest->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_QtTest->api_wrapper_type
#define sipWrapperType_Type         sipAPI_QtTest->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_QtTest->api_voidptr_type
#define sipGetPyObject              sipAPI_QtTest->api_get_pyobject
#define sipGetAddress               sipAPI_QtTest->api_get_address
#define sipGetMixinAddress          sipAPI_QtTest->api_get_mixin_address
#define sipGetCppPtr                sipAPI_QtTest->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_QtTest->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_QtTest->api_is_py_method
#define sipCallHook                 sipAPI_QtTest->api_call_hook
#define sipEndThread                sipAPI_QtTest->api_end_thread
#define sipConnectRx                sipAPI_QtTest->api_connect_rx
#define sipDisconnectRx             sipAPI_QtTest->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_QtTest->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_QtTest->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_QtTest->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_QtTest->api_add_type_instance
#define sipFreeSipslot              sipAPI_QtTest->api_free_sipslot
#define sipSameSlot                 sipAPI_QtTest->api_same_slot
#define sipPySlotExtend             sipAPI_QtTest->api_pyslot_extend
#define sipConvertRx                sipAPI_QtTest->api_convert_rx
#define sipAddDelayedDtor           sipAPI_QtTest->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_QtTest->api_can_convert_to_type
#define sipConvertToType            sipAPI_QtTest->api_convert_to_type
#define sipForceConvertToType       sipAPI_QtTest->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_QtTest->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_QtTest->api_convert_to_enum
#define sipConvertToBool            sipAPI_QtTest->api_convert_to_bool
#define sipReleaseType              sipAPI_QtTest->api_release_type
#define sipConvertFromType          sipAPI_QtTest->api_convert_from_type
#define sipConvertFromNewType       sipAPI_QtTest->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_QtTest->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_QtTest->api_convert_from_enum
#define sipGetState                 sipAPI_QtTest->api_get_state
#define sipExportSymbol             sipAPI_QtTest->api_export_symbol
#define sipImportSymbol             sipAPI_QtTest->api_import_symbol
#define sipFindType                 sipAPI_QtTest->api_find_type
#define sipFindNamedEnum            sipAPI_QtTest->api_find_named_enum
#define sipBytes_AsChar             sipAPI_QtTest->api_bytes_as_char
#define sipBytes_AsString           sipAPI_QtTest->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_QtTest->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_QtTest->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_QtTest->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_QtTest->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_QtTest->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_QtTest->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_QtTest->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_QtTest->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_QtTest->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_QtTest->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_QtTest->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_QtTest->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_QtTest->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_QtTest->api_save_slot
#define sipClearAnySlotReference    sipAPI_QtTest->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_QtTest->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_QtTest->api_deprecated
#define sipGetReference             sipAPI_QtTest->api_get_reference
#define sipKeepReference            sipAPI_QtTest->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_QtTest->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_QtTest->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_QtTest->api_type_from_py_type_object
#define sipTypeScope                sipAPI_QtTest->api_type_scope
#define sipResolveTypedef           sipAPI_QtTest->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_QtTest->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_QtTest->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_QtTest->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_QtTest->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_QtTest->api_enable_overflow_checking
#define sipInitMixin                sipAPI_QtTest->api_init_mixin
#define sipExportModule             sipAPI_QtTest->api_export_module
#define sipInitModule               sipAPI_QtTest->api_init_module
#define sipGetInterpreter           sipAPI_QtTest->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_QtTest->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_QtTest->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_QtTest->api_get_type_user_data
#define sipPyTypeDict               sipAPI_QtTest->api_py_type_dict
#define sipPyTypeName               sipAPI_QtTest->api_py_type_name
#define sipGetCFunction             sipAPI_QtTest->api_get_c_function
#define sipGetMethod                sipAPI_QtTest->api_get_method
#define sipFromMethod               sipAPI_QtTest->api_from_method
#define sipGetDate                  sipAPI_QtTest->api_get_date
#define sipFromDate                 sipAPI_QtTest->api_from_date
#define sipGetDateTime              sipAPI_QtTest->api_get_datetime
#define sipFromDateTime             sipAPI_QtTest->api_from_datetime
#define sipGetTime                  sipAPI_QtTest->api_get_time
#define sipFromTime                 sipAPI_QtTest->api_from_time
#define sipIsUserType               sipAPI_QtTest->api_is_user_type
#define sipGetFrame                 sipAPI_QtTest->api_get_frame
#define sipCheckPluginForType       sipAPI_QtTest->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_QtTest->api_unicode_new
#define sipUnicodeWrite             sipAPI_QtTest->api_unicode_write
#define sipUnicodeData              sipAPI_QtTest->api_unicode_data
#define sipGetBufferInfo            sipAPI_QtTest->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_QtTest->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_QtTest->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_QtTest->api_is_derived_class
#define sipGetUserObject            sipAPI_QtTest->api_get_user_object
#define sipSetUserObject            sipAPI_QtTest->api_set_user_object
#define sipRegisterEventHandler     sipAPI_QtTest->api_register_event_handler
#define sipLong_AsChar              sipAPI_QtTest->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_QtTest->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_QtTest->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_QtTest->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_QtTest->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_QtTest->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_QtTest->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_QtTest->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_QtTest->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_QtTest->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_QtTest->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_QtTest->api_map_string_to_class
#define sipMapIntToClass            sipAPI_QtTest->api_map_int_to_class
#define sipFindClass                sipAPI_QtTest->api_find_class
#define sipFindMappedType           sipAPI_QtTest->api_find_mapped_type
#define sipConvertToArray           sipAPI_QtTest->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_QtTest->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_QtTest->api_enable_gc
#define sipPrintObject              sipAPI_QtTest->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_QtTest->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings_QtTest[];

#define sipType_QSignalSpy sipExportedTypes_QtTest[0]
#define sipClass_QSignalSpy sipExportedTypes_QtTest[0]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtTest_QSignalSpy;

#define sipType_QTest sipExportedTypes_QtTest[1]
#define sipClass_QTest sipExportedTypes_QtTest[1]->u.td_wrapper_type

#define sipType_QTest_MouseAction sipExportedTypes_QtTest[3]
#define sipEnum_QTest_MouseAction sipExportedTypes_QtTest[3]->u.td_py_type

#define sipType_QTest_KeyAction sipExportedTypes_QtTest[2]
#define sipEnum_QTest_KeyAction sipExportedTypes_QtTest[2]->u.td_py_type

extern sipClassTypeDef sipTypeDef_QtTest_QTest;

#define sipType_QTest_QTouchEventSequence sipExportedTypes_QtTest[4]
#define sipClass_QTest_QTouchEventSequence sipExportedTypes_QtTest[4]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_QtTest_QTest_QTouchEventSequence;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_QtTest;
extern sipExportedModuleDef sipModuleAPI_QtTest;
extern sipTypeDef *sipExportedTypes_QtTest[];

#define sipType_Qt_Key sipImportedTypes_QtTest_QtCore[9].it_td
#define sipEnum_Qt_Key sipImportedTypes_QtTest_QtCore[9].it_td->u.td_py_type

#define sipType_Qt_MouseButton sipImportedTypes_QtTest_QtCore[11].it_td
#define sipEnum_Qt_MouseButton sipImportedTypes_QtTest_QtCore[11].it_td->u.td_py_type

#define sipType_Qt_KeyboardModifiers sipImportedTypes_QtTest_QtCore[10].it_td
#define sipClass_Qt_KeyboardModifiers sipImportedTypes_QtTest_QtCore[10].it_td->u.td_wrapper_type

#define sipType_QObject sipImportedTypes_QtTest_QtCore[5].it_td
#define sipClass_QObject sipImportedTypes_QtTest_QtCore[5].it_td->u.td_wrapper_type

#define sipType_QByteArray sipImportedTypes_QtTest_QtCore[0].it_td
#define sipClass_QByteArray sipImportedTypes_QtTest_QtCore[0].it_td->u.td_wrapper_type

#define sipType_QEvent sipImportedTypes_QtTest_QtCore[2].it_td
#define sipClass_QEvent sipImportedTypes_QtTest_QtCore[2].it_td->u.td_wrapper_type

#define sipType_QTimerEvent sipImportedTypes_QtTest_QtCore[8].it_td
#define sipClass_QTimerEvent sipImportedTypes_QtTest_QtCore[8].it_td->u.td_wrapper_type

#define sipType_QChildEvent sipImportedTypes_QtTest_QtCore[1].it_td
#define sipClass_QChildEvent sipImportedTypes_QtTest_QtCore[1].it_td->u.td_wrapper_type

#define sipType_QMetaMethod sipImportedTypes_QtTest_QtCore[4].it_td
#define sipClass_QMetaMethod sipImportedTypes_QtTest_QtCore[4].it_td->u.td_wrapper_type

#define sipType_QPoint sipImportedTypes_QtTest_QtCore[6].it_td
#define sipClass_QPoint sipImportedTypes_QtTest_QtCore[6].it_td->u.td_wrapper_type

#define sipType_QList_0100QVariant sipImportedTypes_QtTest_QtCore[3].it_td

#define sipType_QString sipImportedTypes_QtTest_QtCore[7].it_td
extern sipImportedTypeDef sipImportedTypes_QtTest_QtCore[];
extern sipImportedVirtErrorHandlerDef sipImportedVirtErrorHandlers_QtTest_QtCore[];

#define sipType_QWindow sipImportedTypes_QtTest_QtGui[1].it_td
#define sipClass_QWindow sipImportedTypes_QtTest_QtGui[1].it_td->u.td_wrapper_type

#define sipType_QTouchDevice sipImportedTypes_QtTest_QtGui[0].it_td
#define sipClass_QTouchDevice sipImportedTypes_QtTest_QtGui[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_QtTest_QtGui[];

#define sipType_QWidget sipImportedTypes_QtTest_QtWidgets[0].it_td
#define sipClass_QWidget sipImportedTypes_QtTest_QtWidgets[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_QtTest_QtWidgets[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_QtTest_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_QtTest_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip_QtTest_qt_metacast;
#line 87 "/home/pi/PyQt5_gpl-5.10.1/sip/QtTest/qsignalspy.sip"
// Imports from QtCore.
typedef sipErrorState (*pyqt5_qttest_get_pyqtsignal_parts_t)(PyObject *, QObject **, QByteArray &);
extern pyqt5_qttest_get_pyqtsignal_parts_t pyqt5_qttest_get_pyqtsignal_parts;
#line 579 "/home/pi/PyQt5_gpl-5.10.1/QtTest/sipAPIQtTest.h"

#endif
