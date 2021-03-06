/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/extension.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "google/protobuf/any.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_config_core_v3_TypedExtensionConfig_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_TypedExtensionConfig__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_TypedExtensionConfig_msginit = {
  &envoy_config_core_v3_TypedExtensionConfig_submsgs[0],
  &envoy_config_core_v3_TypedExtensionConfig__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_ExtensionConfigSource_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_ExtensionConfigSource__fields[4] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(1, 1), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_ExtensionConfigSource_msginit = {
  &envoy_config_core_v3_ExtensionConfigSource_submsgs[0],
  &envoy_config_core_v3_ExtensionConfigSource__fields[0],
  UPB_SIZE(16, 32), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout *messages_layout[2] = {
  &envoy_config_core_v3_TypedExtensionConfig_msginit,
  &envoy_config_core_v3_ExtensionConfigSource_msginit,
};

const upb_msglayout_file envoy_config_core_v3_extension_proto_upb_file_layout = {
  messages_layout,
  NULL,
  2,
  0,
};

#include "upb/port_undef.inc"

