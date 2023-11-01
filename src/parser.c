#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 396
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  sym_prefix_name = 3,
  anon_sym_integer = 4,
  anon_sym_decimal = 5,
  anon_sym_float = 6,
  anon_sym_string = 7,
  sym__non_zero = 8,
  sym__zero = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  sym__quotedString = 12,
  anon_sym_Ontology_COLON = 13,
  anon_sym_Prefix_COLON = 14,
  anon_sym_Annotations_COLON = 15,
  anon_sym_inverse = 16,
  anon_sym_not = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_or = 22,
  anon_sym_and = 23,
  anon_sym_LBRACK = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACK = 26,
  anon_sym_length = 27,
  anon_sym_minLength = 28,
  anon_sym_maxLength = 29,
  anon_sym_pattern = 30,
  anon_sym_langRange = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_that = 34,
  anon_sym_only = 35,
  anon_sym_exactly = 36,
  anon_sym_Datatype_COLON = 37,
  anon_sym_EquivalentTo_COLON = 38,
  anon_sym_Class_COLON = 39,
  anon_sym_SubClassOf_COLON = 40,
  anon_sym_ObjectProperty_COLON = 41,
  anon_sym_Domain_COLON = 42,
  anon_sym_Range_COLON = 43,
  anon_sym_SubPropertyOf_COLON = 44,
  anon_sym_DisjointWith_COLON = 45,
  anon_sym_InverseOf_COLON = 46,
  anon_sym_Characteristics_COLON = 47,
  anon_sym_SubPropertyChain_COLON = 48,
  anon_sym_o = 49,
  anon_sym_Functional = 50,
  anon_sym_InverseFunctional = 51,
  anon_sym_Reflexive = 52,
  anon_sym_Irreflexive = 53,
  anon_sym_Symmetric = 54,
  anon_sym_Asymmetric = 55,
  anon_sym_Transitive = 56,
  anon_sym_COLON = 57,
  sym__scheme = 58,
  anon_sym_SLASH_SLASH = 59,
  anon_sym_AT = 60,
  sym__iunreserved = 61,
  sym__port = 62,
  anon_sym_SLASH = 63,
  sym__iquery = 64,
  sym__ifragment = 65,
  sym__pn_local = 66,
  sym__pname_ln = 67,
  sym_source_file = 68,
  sym_iri = 69,
  sym_full_iri = 70,
  sym_abbreviated_iri = 71,
  sym_simple_iri = 72,
  sym_datatype = 73,
  sym__datatype_iri = 74,
  sym__class_iri = 75,
  sym__annotation_property_iri = 76,
  sym__ontology_iri = 77,
  sym__data_property_iri = 78,
  sym__version_iri = 79,
  sym__object_property_iri = 80,
  sym_non_negative_integer = 81,
  sym__positive_integer = 82,
  aux_sym__digits = 83,
  sym__digit = 84,
  sym_literal = 85,
  sym__integer_literal = 86,
  sym__string_literal_no_language = 87,
  sym_ontology_document = 88,
  sym_ontology = 89,
  sym_frame = 90,
  sym_prefix_declaration = 91,
  sym_annotations = 92,
  sym_annotation = 93,
  sym_annotation_target = 94,
  sym_object_property_expression = 95,
  sym_inverse_object_property = 96,
  sym_data_property_expression = 97,
  sym_data_primary = 98,
  sym_data_atomic = 99,
  sym_data_range = 100,
  sym_data_conjunction = 101,
  sym_datatype_restriction = 102,
  sym_facet = 103,
  sym__restriction_value = 104,
  sym_description = 105,
  sym_conjunction = 106,
  sym_primary = 107,
  sym_restriction = 108,
  sym_atomic = 109,
  sym_datatype_frame = 110,
  sym_class_frame = 111,
  sym_object_property_frame = 112,
  sym_object_property_characteristic = 113,
  sym_description_annotated_list = 114,
  sym_annotation_annotated_list = 115,
  sym_object_property_expression_annotated_list = 116,
  sym_object_property_characteristic_annotated_list = 117,
  sym__iri_rfc3987 = 118,
  sym__ihier_part = 119,
  sym__iauthority = 120,
  sym__iuserinfo = 121,
  sym__ihost = 122,
  aux_sym__ipath_abempty = 123,
  sym__isegment = 124,
  aux_sym__positive_integer_repeat1 = 125,
  aux_sym_ontology_document_repeat1 = 126,
  aux_sym_ontology_repeat1 = 127,
  aux_sym_data_range_repeat1 = 128,
  aux_sym_data_conjunction_repeat1 = 129,
  aux_sym_datatype_restriction_repeat1 = 130,
  aux_sym_description_repeat1 = 131,
  aux_sym_conjunction_repeat1 = 132,
  aux_sym_conjunction_repeat2 = 133,
  aux_sym_datatype_frame_repeat1 = 134,
  aux_sym_class_frame_repeat1 = 135,
  aux_sym_object_property_frame_repeat1 = 136,
  aux_sym_object_property_frame_repeat2 = 137,
  aux_sym_description_annotated_list_repeat1 = 138,
  aux_sym_annotation_annotated_list_repeat1 = 139,
  aux_sym_object_property_expression_annotated_list_repeat1 = 140,
  aux_sym_object_property_characteristic_annotated_list_repeat1 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_prefix_name] = "prefix_name",
  [anon_sym_integer] = "integer",
  [anon_sym_decimal] = "decimal",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [sym__non_zero] = "_non_zero",
  [sym__zero] = "_zero",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym__quotedString] = "_quotedString",
  [anon_sym_Ontology_COLON] = "Ontology:",
  [anon_sym_Prefix_COLON] = "Prefix:",
  [anon_sym_Annotations_COLON] = "Annotations:",
  [anon_sym_inverse] = "inverse",
  [anon_sym_not] = "not",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_length] = "length",
  [anon_sym_minLength] = "minLength",
  [anon_sym_maxLength] = "maxLength",
  [anon_sym_pattern] = "pattern",
  [anon_sym_langRange] = "langRange",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_that] = "that",
  [anon_sym_only] = "only",
  [anon_sym_exactly] = "exactly",
  [anon_sym_Datatype_COLON] = "Datatype:",
  [anon_sym_EquivalentTo_COLON] = "EquivalentTo:",
  [anon_sym_Class_COLON] = "Class:",
  [anon_sym_SubClassOf_COLON] = "SubClassOf:",
  [anon_sym_ObjectProperty_COLON] = "ObjectProperty:",
  [anon_sym_Domain_COLON] = "Domain:",
  [anon_sym_Range_COLON] = "Range:",
  [anon_sym_SubPropertyOf_COLON] = "SubPropertyOf:",
  [anon_sym_DisjointWith_COLON] = "DisjointWith:",
  [anon_sym_InverseOf_COLON] = "InverseOf:",
  [anon_sym_Characteristics_COLON] = "Characteristics:",
  [anon_sym_SubPropertyChain_COLON] = "SubPropertyChain:",
  [anon_sym_o] = "o",
  [anon_sym_Functional] = "Functional",
  [anon_sym_InverseFunctional] = "InverseFunctional",
  [anon_sym_Reflexive] = "Reflexive",
  [anon_sym_Irreflexive] = "Irreflexive",
  [anon_sym_Symmetric] = "Symmetric",
  [anon_sym_Asymmetric] = "Asymmetric",
  [anon_sym_Transitive] = "Transitive",
  [anon_sym_COLON] = ":",
  [sym__scheme] = "_scheme",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_AT] = "@",
  [sym__iunreserved] = "_iunreserved",
  [sym__port] = "_port",
  [anon_sym_SLASH] = "/",
  [sym__iquery] = "_iquery",
  [sym__ifragment] = "_ifragment",
  [sym__pn_local] = "_pn_local",
  [sym__pname_ln] = "_pname_ln",
  [sym_source_file] = "source_file",
  [sym_iri] = "iri",
  [sym_full_iri] = "full_iri",
  [sym_abbreviated_iri] = "abbreviated_iri",
  [sym_simple_iri] = "simple_iri",
  [sym_datatype] = "datatype",
  [sym__datatype_iri] = "_datatype_iri",
  [sym__class_iri] = "_class_iri",
  [sym__annotation_property_iri] = "_annotation_property_iri",
  [sym__ontology_iri] = "_ontology_iri",
  [sym__data_property_iri] = "_data_property_iri",
  [sym__version_iri] = "_version_iri",
  [sym__object_property_iri] = "_object_property_iri",
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [aux_sym__digits] = "_digits",
  [sym__digit] = "_digit",
  [sym_literal] = "literal",
  [sym__integer_literal] = "_integer_literal",
  [sym__string_literal_no_language] = "_string_literal_no_language",
  [sym_ontology_document] = "ontology_document",
  [sym_ontology] = "ontology",
  [sym_frame] = "frame",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_annotations] = "annotations",
  [sym_annotation] = "annotation",
  [sym_annotation_target] = "annotation_target",
  [sym_object_property_expression] = "object_property_expression",
  [sym_inverse_object_property] = "inverse_object_property",
  [sym_data_property_expression] = "data_property_expression",
  [sym_data_primary] = "data_primary",
  [sym_data_atomic] = "data_atomic",
  [sym_data_range] = "data_range",
  [sym_data_conjunction] = "data_conjunction",
  [sym_datatype_restriction] = "datatype_restriction",
  [sym_facet] = "facet",
  [sym__restriction_value] = "_restriction_value",
  [sym_description] = "description",
  [sym_conjunction] = "conjunction",
  [sym_primary] = "primary",
  [sym_restriction] = "restriction",
  [sym_atomic] = "atomic",
  [sym_datatype_frame] = "datatype_frame",
  [sym_class_frame] = "class_frame",
  [sym_object_property_frame] = "object_property_frame",
  [sym_object_property_characteristic] = "object_property_characteristic",
  [sym_description_annotated_list] = "description_annotated_list",
  [sym_annotation_annotated_list] = "annotation_annotated_list",
  [sym_object_property_expression_annotated_list] = "object_property_expression_annotated_list",
  [sym_object_property_characteristic_annotated_list] = "object_property_characteristic_annotated_list",
  [sym__iri_rfc3987] = "_iri_rfc3987",
  [sym__ihier_part] = "_ihier_part",
  [sym__iauthority] = "_iauthority",
  [sym__iuserinfo] = "_iuserinfo",
  [sym__ihost] = "_ihost",
  [aux_sym__ipath_abempty] = "_ipath_abempty",
  [sym__isegment] = "_isegment",
  [aux_sym__positive_integer_repeat1] = "_positive_integer_repeat1",
  [aux_sym_ontology_document_repeat1] = "ontology_document_repeat1",
  [aux_sym_ontology_repeat1] = "ontology_repeat1",
  [aux_sym_data_range_repeat1] = "data_range_repeat1",
  [aux_sym_data_conjunction_repeat1] = "data_conjunction_repeat1",
  [aux_sym_datatype_restriction_repeat1] = "datatype_restriction_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_datatype_frame_repeat1] = "datatype_frame_repeat1",
  [aux_sym_class_frame_repeat1] = "class_frame_repeat1",
  [aux_sym_object_property_frame_repeat1] = "object_property_frame_repeat1",
  [aux_sym_object_property_frame_repeat2] = "object_property_frame_repeat2",
  [aux_sym_description_annotated_list_repeat1] = "description_annotated_list_repeat1",
  [aux_sym_annotation_annotated_list_repeat1] = "annotation_annotated_list_repeat1",
  [aux_sym_object_property_expression_annotated_list_repeat1] = "object_property_expression_annotated_list_repeat1",
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = "object_property_characteristic_annotated_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_prefix_name] = sym_prefix_name,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [sym__non_zero] = sym__non_zero,
  [sym__zero] = sym__zero,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__quotedString] = sym__quotedString,
  [anon_sym_Ontology_COLON] = anon_sym_Ontology_COLON,
  [anon_sym_Prefix_COLON] = anon_sym_Prefix_COLON,
  [anon_sym_Annotations_COLON] = anon_sym_Annotations_COLON,
  [anon_sym_inverse] = anon_sym_inverse,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_minLength] = anon_sym_minLength,
  [anon_sym_maxLength] = anon_sym_maxLength,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_langRange] = anon_sym_langRange,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_Datatype_COLON] = anon_sym_Datatype_COLON,
  [anon_sym_EquivalentTo_COLON] = anon_sym_EquivalentTo_COLON,
  [anon_sym_Class_COLON] = anon_sym_Class_COLON,
  [anon_sym_SubClassOf_COLON] = anon_sym_SubClassOf_COLON,
  [anon_sym_ObjectProperty_COLON] = anon_sym_ObjectProperty_COLON,
  [anon_sym_Domain_COLON] = anon_sym_Domain_COLON,
  [anon_sym_Range_COLON] = anon_sym_Range_COLON,
  [anon_sym_SubPropertyOf_COLON] = anon_sym_SubPropertyOf_COLON,
  [anon_sym_DisjointWith_COLON] = anon_sym_DisjointWith_COLON,
  [anon_sym_InverseOf_COLON] = anon_sym_InverseOf_COLON,
  [anon_sym_Characteristics_COLON] = anon_sym_Characteristics_COLON,
  [anon_sym_SubPropertyChain_COLON] = anon_sym_SubPropertyChain_COLON,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_Functional] = anon_sym_Functional,
  [anon_sym_InverseFunctional] = anon_sym_InverseFunctional,
  [anon_sym_Reflexive] = anon_sym_Reflexive,
  [anon_sym_Irreflexive] = anon_sym_Irreflexive,
  [anon_sym_Symmetric] = anon_sym_Symmetric,
  [anon_sym_Asymmetric] = anon_sym_Asymmetric,
  [anon_sym_Transitive] = anon_sym_Transitive,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__scheme] = sym__scheme,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_AT] = anon_sym_AT,
  [sym__iunreserved] = sym__iunreserved,
  [sym__port] = sym__port,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__iquery] = sym__iquery,
  [sym__ifragment] = sym__ifragment,
  [sym__pn_local] = sym__pn_local,
  [sym__pname_ln] = sym__pname_ln,
  [sym_source_file] = sym_source_file,
  [sym_iri] = sym_iri,
  [sym_full_iri] = sym_full_iri,
  [sym_abbreviated_iri] = sym_abbreviated_iri,
  [sym_simple_iri] = sym_simple_iri,
  [sym_datatype] = sym_datatype,
  [sym__datatype_iri] = sym__datatype_iri,
  [sym__class_iri] = sym__class_iri,
  [sym__annotation_property_iri] = sym__annotation_property_iri,
  [sym__ontology_iri] = sym__ontology_iri,
  [sym__data_property_iri] = sym__data_property_iri,
  [sym__version_iri] = sym__version_iri,
  [sym__object_property_iri] = sym__object_property_iri,
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [aux_sym__digits] = aux_sym__digits,
  [sym__digit] = sym__digit,
  [sym_literal] = sym_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym__string_literal_no_language] = sym__string_literal_no_language,
  [sym_ontology_document] = sym_ontology_document,
  [sym_ontology] = sym_ontology,
  [sym_frame] = sym_frame,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_annotations] = sym_annotations,
  [sym_annotation] = sym_annotation,
  [sym_annotation_target] = sym_annotation_target,
  [sym_object_property_expression] = sym_object_property_expression,
  [sym_inverse_object_property] = sym_inverse_object_property,
  [sym_data_property_expression] = sym_data_property_expression,
  [sym_data_primary] = sym_data_primary,
  [sym_data_atomic] = sym_data_atomic,
  [sym_data_range] = sym_data_range,
  [sym_data_conjunction] = sym_data_conjunction,
  [sym_datatype_restriction] = sym_datatype_restriction,
  [sym_facet] = sym_facet,
  [sym__restriction_value] = sym__restriction_value,
  [sym_description] = sym_description,
  [sym_conjunction] = sym_conjunction,
  [sym_primary] = sym_primary,
  [sym_restriction] = sym_restriction,
  [sym_atomic] = sym_atomic,
  [sym_datatype_frame] = sym_datatype_frame,
  [sym_class_frame] = sym_class_frame,
  [sym_object_property_frame] = sym_object_property_frame,
  [sym_object_property_characteristic] = sym_object_property_characteristic,
  [sym_description_annotated_list] = sym_description_annotated_list,
  [sym_annotation_annotated_list] = sym_annotation_annotated_list,
  [sym_object_property_expression_annotated_list] = sym_object_property_expression_annotated_list,
  [sym_object_property_characteristic_annotated_list] = sym_object_property_characteristic_annotated_list,
  [sym__iri_rfc3987] = sym__iri_rfc3987,
  [sym__ihier_part] = sym__ihier_part,
  [sym__iauthority] = sym__iauthority,
  [sym__iuserinfo] = sym__iuserinfo,
  [sym__ihost] = sym__ihost,
  [aux_sym__ipath_abempty] = aux_sym__ipath_abempty,
  [sym__isegment] = sym__isegment,
  [aux_sym__positive_integer_repeat1] = aux_sym__positive_integer_repeat1,
  [aux_sym_ontology_document_repeat1] = aux_sym_ontology_document_repeat1,
  [aux_sym_ontology_repeat1] = aux_sym_ontology_repeat1,
  [aux_sym_data_range_repeat1] = aux_sym_data_range_repeat1,
  [aux_sym_data_conjunction_repeat1] = aux_sym_data_conjunction_repeat1,
  [aux_sym_datatype_restriction_repeat1] = aux_sym_datatype_restriction_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_datatype_frame_repeat1] = aux_sym_datatype_frame_repeat1,
  [aux_sym_class_frame_repeat1] = aux_sym_class_frame_repeat1,
  [aux_sym_object_property_frame_repeat1] = aux_sym_object_property_frame_repeat1,
  [aux_sym_object_property_frame_repeat2] = aux_sym_object_property_frame_repeat2,
  [aux_sym_description_annotated_list_repeat1] = aux_sym_description_annotated_list_repeat1,
  [aux_sym_annotation_annotated_list_repeat1] = aux_sym_annotation_annotated_list_repeat1,
  [aux_sym_object_property_expression_annotated_list_repeat1] = aux_sym_object_property_expression_annotated_list_repeat1,
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = aux_sym_object_property_characteristic_annotated_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_prefix_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [sym__non_zero] = {
    .visible = false,
    .named = true,
  },
  [sym__zero] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__quotedString] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Ontology_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prefix_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Annotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minLength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxLength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_langRange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Datatype_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EquivalentTo_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Class_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SubClassOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ObjectProperty_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Domain_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Range_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SubPropertyOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointWith_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InverseOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Characteristics_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SubPropertyChain_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Functional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InverseFunctional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Reflexive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Irreflexive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Symmetric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Asymmetric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Transitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__scheme] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__iunreserved] = {
    .visible = false,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__iquery] = {
    .visible = false,
    .named = true,
  },
  [sym__ifragment] = {
    .visible = false,
    .named = true,
  },
  [sym__pn_local] = {
    .visible = false,
    .named = true,
  },
  [sym__pname_ln] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_full_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_abbreviated_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym__datatype_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__class_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation_property_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__ontology_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__data_property_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__version_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_iri] = {
    .visible = false,
    .named = true,
  },
  [sym_non_negative_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__positive_integer] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__digits] = {
    .visible = false,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_no_language] = {
    .visible = false,
    .named = true,
  },
  [sym_ontology_document] = {
    .visible = true,
    .named = true,
  },
  [sym_ontology] = {
    .visible = true,
    .named = true,
  },
  [sym_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_target] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inverse_object_property] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_data_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_data_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_data_range] = {
    .visible = true,
    .named = true,
  },
  [sym_data_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_facet] = {
    .visible = true,
    .named = true,
  },
  [sym__restriction_value] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_class_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_characteristic] = {
    .visible = true,
    .named = true,
  },
  [sym_description_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_expression_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_characteristic_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym__iri_rfc3987] = {
    .visible = false,
    .named = true,
  },
  [sym__ihier_part] = {
    .visible = false,
    .named = true,
  },
  [sym__iauthority] = {
    .visible = false,
    .named = true,
  },
  [sym__iuserinfo] = {
    .visible = false,
    .named = true,
  },
  [sym__ihost] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__ipath_abempty] = {
    .visible = false,
    .named = false,
  },
  [sym__isegment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__positive_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ontology_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ontology_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_range_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_restriction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_frame_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_expression_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 2,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 6,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 4,
  [21] = 21,
  [22] = 5,
  [23] = 23,
  [24] = 24,
  [25] = 2,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 14,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 44,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 44,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 44,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 65,
  [80] = 6,
  [81] = 4,
  [82] = 82,
  [83] = 5,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 85,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 12,
  [94] = 11,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 13,
  [110] = 110,
  [111] = 103,
  [112] = 112,
  [113] = 113,
  [114] = 103,
  [115] = 99,
  [116] = 99,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 9,
  [123] = 123,
  [124] = 7,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 8,
  [130] = 130,
  [131] = 131,
  [132] = 3,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 14,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 139,
  [142] = 21,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 143,
  [147] = 19,
  [148] = 148,
  [149] = 143,
  [150] = 18,
  [151] = 17,
  [152] = 23,
  [153] = 143,
  [154] = 143,
  [155] = 155,
  [156] = 7,
  [157] = 157,
  [158] = 9,
  [159] = 8,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 24,
  [164] = 3,
  [165] = 165,
  [166] = 28,
  [167] = 155,
  [168] = 168,
  [169] = 16,
  [170] = 170,
  [171] = 162,
  [172] = 160,
  [173] = 26,
  [174] = 174,
  [175] = 155,
  [176] = 27,
  [177] = 160,
  [178] = 162,
  [179] = 160,
  [180] = 160,
  [181] = 181,
  [182] = 82,
  [183] = 13,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 63,
  [188] = 72,
  [189] = 74,
  [190] = 190,
  [191] = 184,
  [192] = 184,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 70,
  [197] = 78,
  [198] = 69,
  [199] = 66,
  [200] = 12,
  [201] = 76,
  [202] = 11,
  [203] = 193,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 209,
  [211] = 89,
  [212] = 88,
  [213] = 13,
  [214] = 214,
  [215] = 12,
  [216] = 11,
  [217] = 209,
  [218] = 206,
  [219] = 219,
  [220] = 209,
  [221] = 221,
  [222] = 222,
  [223] = 206,
  [224] = 209,
  [225] = 84,
  [226] = 206,
  [227] = 206,
  [228] = 13,
  [229] = 12,
  [230] = 98,
  [231] = 97,
  [232] = 232,
  [233] = 233,
  [234] = 11,
  [235] = 7,
  [236] = 9,
  [237] = 8,
  [238] = 3,
  [239] = 239,
  [240] = 240,
  [241] = 100,
  [242] = 242,
  [243] = 96,
  [244] = 244,
  [245] = 120,
  [246] = 246,
  [247] = 247,
  [248] = 232,
  [249] = 249,
  [250] = 250,
  [251] = 17,
  [252] = 252,
  [253] = 7,
  [254] = 254,
  [255] = 9,
  [256] = 190,
  [257] = 8,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 3,
  [262] = 19,
  [263] = 18,
  [264] = 264,
  [265] = 265,
  [266] = 21,
  [267] = 23,
  [268] = 268,
  [269] = 17,
  [270] = 270,
  [271] = 16,
  [272] = 272,
  [273] = 3,
  [274] = 8,
  [275] = 27,
  [276] = 26,
  [277] = 24,
  [278] = 9,
  [279] = 7,
  [280] = 19,
  [281] = 21,
  [282] = 18,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 23,
  [287] = 28,
  [288] = 16,
  [289] = 21,
  [290] = 28,
  [291] = 291,
  [292] = 18,
  [293] = 26,
  [294] = 27,
  [295] = 190,
  [296] = 24,
  [297] = 297,
  [298] = 17,
  [299] = 299,
  [300] = 19,
  [301] = 7,
  [302] = 9,
  [303] = 8,
  [304] = 3,
  [305] = 23,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 76,
  [310] = 72,
  [311] = 63,
  [312] = 308,
  [313] = 308,
  [314] = 24,
  [315] = 315,
  [316] = 69,
  [317] = 308,
  [318] = 318,
  [319] = 70,
  [320] = 308,
  [321] = 26,
  [322] = 315,
  [323] = 16,
  [324] = 28,
  [325] = 27,
  [326] = 315,
  [327] = 190,
  [328] = 3,
  [329] = 8,
  [330] = 74,
  [331] = 331,
  [332] = 78,
  [333] = 9,
  [334] = 7,
  [335] = 82,
  [336] = 336,
  [337] = 66,
  [338] = 88,
  [339] = 339,
  [340] = 89,
  [341] = 341,
  [342] = 84,
  [343] = 343,
  [344] = 190,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 348,
  [356] = 348,
  [357] = 348,
  [358] = 348,
  [359] = 359,
  [360] = 360,
  [361] = 347,
  [362] = 348,
  [363] = 348,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 347,
  [368] = 368,
  [369] = 348,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 372,
  [375] = 372,
  [376] = 376,
  [377] = 377,
  [378] = 372,
  [379] = 379,
  [380] = 380,
  [381] = 372,
  [382] = 382,
  [383] = 372,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 372,
  [392] = 392,
  [393] = 372,
  [394] = 394,
  [395] = 395,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(294);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(386);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == '+') ADVANCE(312);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == '0') ADVANCE(310);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == '?') ADVANCE(385);
      if (lookahead == '@') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(67);
      if (lookahead == 'P') ADVANCE(208);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(263);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == '[') ADVANCE(332);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '+') ADVANCE(312);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(379);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(349);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(357);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(355);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(317);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(345);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(363);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(351);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(318);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(361);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(347);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(359);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(353);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(365);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(367);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'P') ADVANCE(213);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(266);
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(222);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 44:
      if (lookahead == 'W') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(335);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 147:
      if (lookahead == 'j') ADVANCE(199);
      END_STATE();
    case 148:
      if (lookahead == 'j') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 206:
      if (lookahead == 'q') ADVANCE(264);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 267:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 268:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 269:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 270:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 271:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 272:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 273:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 274:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 275:
      if (lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 276:
      if (lookahead == 'x') ADVANCE(146);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 279:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 280:
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 282:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 283:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 284:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 285:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(381);
      END_STATE();
    case 286:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 287:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 288:
      if (eof) ADVANCE(294);
      if (lookahead == '#') ADVANCE(386);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '?') ADVANCE(385);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead == 'I') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'S') ADVANCE(522);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(288)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 289:
      if (eof) ADVANCE(294);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead == 'I') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'S') ADVANCE(522);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 290:
      if (eof) ADVANCE(294);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'C') ADVANCE(454);
      if (lookahead == 'D') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'S') ADVANCE(523);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 291:
      if (eof) ADVANCE(294);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'C') ADVANCE(454);
      if (lookahead == 'D') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'S') ADVANCE(523);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(291)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 292:
      if (eof) ADVANCE(294);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == ',') ADVANCE(333);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '@') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(67);
      if (lookahead == 'P') ADVANCE(208);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(263);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == '[') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      END_STATE();
    case 293:
      if (eof) ADVANCE(294);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == 'C') ADVANCE(454);
      if (lookahead == 'D') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(340);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__quotedString);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Functional);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_InverseFunctional);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Reflexive);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Irreflexive);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Symmetric);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_Asymmetric);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Transitive);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(379);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'O') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'O') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'O') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'P') ADVANCE(487);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'P') ADVANCE(494);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'T') ADVANCE(473);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'W') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'h') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'j') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'j') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(425);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'q') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'v') ADVANCE(422);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'v') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'y') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'y') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 288},
  [3] = {.lex_state = 292},
  [4] = {.lex_state = 289},
  [5] = {.lex_state = 289},
  [6] = {.lex_state = 289},
  [7] = {.lex_state = 292},
  [8] = {.lex_state = 292},
  [9] = {.lex_state = 292},
  [10] = {.lex_state = 291},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 288},
  [15] = {.lex_state = 290},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 290},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 290},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 292},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 292},
  [38] = {.lex_state = 292},
  [39] = {.lex_state = 291},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 292},
  [43] = {.lex_state = 292},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 292},
  [46] = {.lex_state = 292},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 292},
  [49] = {.lex_state = 292},
  [50] = {.lex_state = 292},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 292},
  [53] = {.lex_state = 292},
  [54] = {.lex_state = 292},
  [55] = {.lex_state = 292},
  [56] = {.lex_state = 292},
  [57] = {.lex_state = 292},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 292},
  [60] = {.lex_state = 292},
  [61] = {.lex_state = 292},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 292},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 292},
  [67] = {.lex_state = 293},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 292},
  [70] = {.lex_state = 292},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 292},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 292},
  [75] = {.lex_state = 292},
  [76] = {.lex_state = 292},
  [77] = {.lex_state = 293},
  [78] = {.lex_state = 292},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 292},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 292},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 292},
  [89] = {.lex_state = 292},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 32},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 32},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 32},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 32},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 32},
  [180] = {.lex_state = 32},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 292},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 292},
  [188] = {.lex_state = 292},
  [189] = {.lex_state = 292},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 292},
  [197] = {.lex_state = 292},
  [198] = {.lex_state = 292},
  [199] = {.lex_state = 292},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 292},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 292},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 292},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 292},
  [212] = {.lex_state = 292},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 292},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 292},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 292},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 292},
  [247] = {.lex_state = 292},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 292},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 292},
  [253] = {.lex_state = 293},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 293},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 293},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 293},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 14},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 288},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 14},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 288},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 14},
  [302] = {.lex_state = 14},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 285},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 292},
  [310] = {.lex_state = 292},
  [311] = {.lex_state = 292},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 292},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 292},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 292},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 292},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 292},
  [336] = {.lex_state = 288},
  [337] = {.lex_state = 292},
  [338] = {.lex_state = 292},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 292},
  [341] = {.lex_state = 292},
  [342] = {.lex_state = 292},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 292},
  [348] = {.lex_state = 286},
  [349] = {.lex_state = 292},
  [350] = {.lex_state = 288},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 289},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 286},
  [356] = {.lex_state = 286},
  [357] = {.lex_state = 286},
  [358] = {.lex_state = 286},
  [359] = {.lex_state = 292},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 292},
  [362] = {.lex_state = 286},
  [363] = {.lex_state = 286},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 285},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 292},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 286},
  [370] = {.lex_state = 292},
  [371] = {.lex_state = 285},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 288},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 382},
  [380] = {.lex_state = 288},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 33},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 382},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [sym__non_zero] = ACTIONS(1),
    [sym__zero] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__quotedString] = ACTIONS(1),
    [anon_sym_Ontology_COLON] = ACTIONS(1),
    [anon_sym_Prefix_COLON] = ACTIONS(1),
    [anon_sym_Annotations_COLON] = ACTIONS(1),
    [anon_sym_inverse] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_minLength] = ACTIONS(1),
    [anon_sym_maxLength] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_langRange] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_Datatype_COLON] = ACTIONS(1),
    [anon_sym_EquivalentTo_COLON] = ACTIONS(1),
    [anon_sym_Class_COLON] = ACTIONS(1),
    [anon_sym_SubClassOf_COLON] = ACTIONS(1),
    [anon_sym_ObjectProperty_COLON] = ACTIONS(1),
    [anon_sym_Domain_COLON] = ACTIONS(1),
    [anon_sym_Range_COLON] = ACTIONS(1),
    [anon_sym_SubPropertyOf_COLON] = ACTIONS(1),
    [anon_sym_DisjointWith_COLON] = ACTIONS(1),
    [anon_sym_InverseOf_COLON] = ACTIONS(1),
    [anon_sym_Characteristics_COLON] = ACTIONS(1),
    [anon_sym_SubPropertyChain_COLON] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_Functional] = ACTIONS(1),
    [anon_sym_InverseFunctional] = ACTIONS(1),
    [anon_sym_Reflexive] = ACTIONS(1),
    [anon_sym_Irreflexive] = ACTIONS(1),
    [anon_sym_Symmetric] = ACTIONS(1),
    [anon_sym_Asymmetric] = ACTIONS(1),
    [anon_sym_Transitive] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(390),
    [sym_ontology_document] = STATE(389),
    [sym_ontology] = STATE(388),
    [sym_prefix_declaration] = STATE(306),
    [aux_sym_ontology_document_repeat1] = STATE(306),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(60), 1,
      sym_data_primary,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 14,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [66] = 1,
    ACTIONS(25), 31,
      ts_builtin_sym_end,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [100] = 4,
    ACTIONS(31), 2,
      sym__non_zero,
      sym__zero,
    STATE(4), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(29), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      sym__pn_local,
  [139] = 4,
    ACTIONS(38), 2,
      sym__non_zero,
      sym__zero,
    STATE(4), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(36), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      sym__pn_local,
  [178] = 4,
    ACTIONS(44), 2,
      sym__non_zero,
      sym__zero,
    STATE(5), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(42), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      sym__pn_local,
  [217] = 1,
    ACTIONS(46), 29,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [249] = 1,
    ACTIONS(48), 29,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [281] = 1,
    ACTIONS(50), 29,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [313] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(60), 1,
      sym_data_primary,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 7,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [372] = 3,
    ACTIONS(54), 2,
      sym__non_zero,
      sym__zero,
    STATE(13), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(52), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [406] = 3,
    ACTIONS(54), 2,
      sym__non_zero,
      sym__zero,
    STATE(13), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(56), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [440] = 3,
    ACTIONS(60), 2,
      sym__non_zero,
      sym__zero,
    STATE(13), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(58), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [474] = 2,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(65), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      sym__pn_local,
  [505] = 4,
    ACTIONS(67), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(42), 13,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [537] = 1,
    ACTIONS(69), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [563] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [593] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [623] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(77), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [653] = 4,
    ACTIONS(82), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(29), 13,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [685] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(85), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [715] = 4,
    ACTIONS(87), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(36), 13,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [747] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [777] = 1,
    ACTIONS(89), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [802] = 15,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(60), 1,
      sym_data_primary,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [855] = 1,
    ACTIONS(91), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [880] = 1,
    ACTIONS(77), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [905] = 1,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [930] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(204), 1,
      sym_data_primary,
    STATE(233), 1,
      sym_data_conjunction,
    STATE(272), 1,
      sym_data_range,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [982] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(204), 1,
      sym_data_primary,
    STATE(233), 1,
      sym_data_conjunction,
    STATE(395), 1,
      sym_data_range,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [1034] = 2,
    ACTIONS(97), 2,
      anon_sym_only,
      anon_sym_exactly,
    ACTIONS(95), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1060] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(204), 1,
      sym_data_primary,
    STATE(233), 1,
      sym_data_conjunction,
    STATE(268), 1,
      sym_data_range,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [1112] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(99), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(71), 1,
      sym_annotations,
    STATE(187), 1,
      sym_primary,
    STATE(198), 1,
      sym__class_iri,
    STATE(225), 1,
      sym_conjunction,
    STATE(230), 1,
      sym_description,
    STATE(284), 1,
      sym_description_annotated_list,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1167] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(204), 1,
      sym_data_primary,
    STATE(252), 1,
      sym_data_conjunction,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [1216] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(99), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(63), 1,
      sym_primary,
    STATE(69), 1,
      sym__class_iri,
    STATE(73), 1,
      sym_annotations,
    STATE(84), 1,
      sym_conjunction,
    STATE(98), 1,
      sym_description,
    STATE(135), 1,
      sym_description_annotated_list,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1271] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(99), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(65), 1,
      sym_annotations,
    STATE(108), 1,
      sym_description,
    STATE(187), 1,
      sym_primary,
    STATE(198), 1,
      sym__class_iri,
    STATE(225), 1,
      sym_conjunction,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1323] = 1,
    ACTIONS(107), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1345] = 2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1369] = 2,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(65), 13,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [1393] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(99), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(63), 1,
      sym_primary,
    STATE(69), 1,
      sym__class_iri,
    STATE(79), 1,
      sym_annotations,
    STATE(84), 1,
      sym_conjunction,
    STATE(108), 1,
      sym_description,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1445] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(48), 1,
      sym_data_atomic,
    STATE(246), 1,
      sym_data_primary,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [1491] = 1,
    ACTIONS(109), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1512] = 1,
    ACTIONS(113), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1533] = 12,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      anon_sym_PLUS,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym__quotedString,
    ACTIONS(125), 1,
      sym__pn_local,
    ACTIONS(127), 1,
      sym__pname_ln,
    STATE(324), 1,
      sym_annotation_target,
    ACTIONS(117), 2,
      sym__non_zero,
      sym__zero,
    STATE(234), 2,
      aux_sym__digits,
      sym__digit,
    STATE(321), 2,
      sym_iri,
      sym_literal,
    STATE(323), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(329), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1576] = 1,
    ACTIONS(129), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1597] = 1,
    ACTIONS(131), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1618] = 12,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_PLUS,
    ACTIONS(139), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      sym__quotedString,
    ACTIONS(143), 1,
      sym__pn_local,
    ACTIONS(145), 1,
      sym__pname_ln,
    STATE(166), 1,
      sym_annotation_target,
    ACTIONS(135), 2,
      sym__non_zero,
      sym__zero,
    STATE(94), 2,
      aux_sym__digits,
      sym__digit,
    STATE(169), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(173), 2,
      sym_iri,
      sym_literal,
    STATE(159), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1661] = 1,
    ACTIONS(147), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1682] = 1,
    ACTIONS(149), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1703] = 1,
    ACTIONS(151), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1724] = 12,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_PLUS,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym__quotedString,
    ACTIONS(163), 1,
      sym__pn_local,
    ACTIONS(165), 1,
      sym__pname_ln,
    STATE(287), 1,
      sym_annotation_target,
    ACTIONS(155), 2,
      sym__non_zero,
      sym__zero,
    STATE(202), 2,
      aux_sym__digits,
      sym__digit,
    STATE(271), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(276), 2,
      sym_iri,
      sym_literal,
    STATE(274), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1767] = 1,
    ACTIONS(167), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1788] = 1,
    ACTIONS(169), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1809] = 1,
    ACTIONS(171), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1830] = 1,
    ACTIONS(173), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1851] = 1,
    ACTIONS(7), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1872] = 1,
    ACTIONS(175), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1893] = 12,
    ACTIONS(177), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      sym__quotedString,
    ACTIONS(187), 1,
      sym__pn_local,
    ACTIONS(189), 1,
      sym__pname_ln,
    STATE(290), 1,
      sym_annotation_target,
    ACTIONS(179), 2,
      sym__non_zero,
      sym__zero,
    STATE(216), 2,
      aux_sym__digits,
      sym__digit,
    STATE(288), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(293), 2,
      sym_iri,
      sym_literal,
    STATE(303), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1936] = 1,
    ACTIONS(191), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1957] = 1,
    ACTIONS(193), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1978] = 1,
    ACTIONS(195), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [1999] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(199), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_DASH,
    ACTIONS(203), 1,
      sym__quotedString,
    STATE(28), 1,
      sym_annotation_target,
    ACTIONS(197), 2,
      sym__non_zero,
      sym__zero,
    STATE(11), 2,
      aux_sym__digits,
      sym__digit,
    STATE(16), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(26), 2,
      sym_iri,
      sym_literal,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2042] = 3,
    ACTIONS(207), 1,
      anon_sym_and,
    STATE(70), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(205), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2066] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_datatype,
    STATE(42), 1,
      sym_datatype_restriction,
    STATE(49), 1,
      sym_data_atomic,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [2106] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(102), 1,
      sym_description,
    STATE(187), 1,
      sym_primary,
    STATE(198), 1,
      sym__class_iri,
    STATE(225), 1,
      sym_conjunction,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2152] = 3,
    ACTIONS(209), 1,
      anon_sym_and,
    STATE(66), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(191), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2176] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(216), 1,
      anon_sym_Class_COLON,
    ACTIONS(218), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(221), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(222), 2,
      sym_iri,
      sym__version_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [2216] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(311), 1,
      sym_primary,
    STATE(316), 1,
      sym__class_iri,
    STATE(342), 1,
      sym_conjunction,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(384), 1,
      sym_description,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2262] = 2,
    ACTIONS(222), 1,
      anon_sym_that,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2284] = 3,
    ACTIONS(207), 1,
      anon_sym_and,
    STATE(66), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(224), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2308] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(187), 1,
      sym_primary,
    STATE(198), 1,
      sym__class_iri,
    STATE(225), 1,
      sym_conjunction,
    STATE(231), 1,
      sym_description,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2354] = 3,
    ACTIONS(228), 1,
      anon_sym_and,
    STATE(82), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(226), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2378] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(63), 1,
      sym_primary,
    STATE(69), 1,
      sym__class_iri,
    STATE(84), 1,
      sym_conjunction,
    STATE(97), 1,
      sym_description,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2424] = 3,
    ACTIONS(230), 1,
      anon_sym_and,
    STATE(74), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(175), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2448] = 1,
    ACTIONS(233), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2468] = 3,
    ACTIONS(228), 1,
      anon_sym_and,
    STATE(78), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(235), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2492] = 11,
    ACTIONS(214), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(216), 1,
      anon_sym_Class_COLON,
    ACTIONS(218), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_LT,
    ACTIONS(241), 1,
      sym__pn_local,
    ACTIONS(243), 1,
      sym__pname_ln,
    STATE(67), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(205), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(257), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [2532] = 3,
    ACTIONS(228), 1,
      anon_sym_and,
    STATE(74), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(245), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2556] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(63), 1,
      sym_primary,
    STATE(69), 1,
      sym__class_iri,
    STATE(84), 1,
      sym_conjunction,
    STATE(102), 1,
      sym_description,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2602] = 4,
    ACTIONS(247), 2,
      sym__non_zero,
      sym__zero,
    STATE(83), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(42), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [2628] = 4,
    ACTIONS(249), 2,
      sym__non_zero,
      sym__zero,
    STATE(81), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(29), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [2654] = 3,
    ACTIONS(228), 1,
      anon_sym_and,
    STATE(74), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(235), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2678] = 4,
    ACTIONS(252), 2,
      sym__non_zero,
      sym__zero,
    STATE(81), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(36), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [2704] = 3,
    ACTIONS(256), 1,
      anon_sym_or,
    STATE(89), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2727] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(75), 1,
      sym_conjunction,
    STATE(187), 1,
      sym_primary,
    STATE(198), 1,
      sym__class_iri,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2770] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(63), 1,
      sym_primary,
    STATE(69), 1,
      sym__class_iri,
    STATE(75), 1,
      sym_conjunction,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2813] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(75), 1,
      sym_conjunction,
    STATE(311), 1,
      sym_primary,
    STATE(316), 1,
      sym__class_iri,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2856] = 3,
    ACTIONS(258), 1,
      anon_sym_or,
    STATE(88), 1,
      aux_sym_description_repeat1,
    ACTIONS(233), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2879] = 3,
    ACTIONS(256), 1,
      anon_sym_or,
    STATE(88), 1,
      aux_sym_description_repeat1,
    ACTIONS(261), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2902] = 3,
    ACTIONS(265), 1,
      anon_sym_o,
    STATE(101), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(263), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2924] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(267), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2946] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(271), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [2968] = 4,
    ACTIONS(275), 2,
      sym__non_zero,
      sym__zero,
    STATE(109), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(56), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(273), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [2992] = 4,
    ACTIONS(275), 2,
      sym__non_zero,
      sym__zero,
    STATE(109), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(52), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(277), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3016] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3038] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(283), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3060] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(287), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3082] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(289), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3104] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3144] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(287), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3166] = 3,
    ACTIONS(293), 1,
      anon_sym_o,
    STATE(101), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(291), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3188] = 1,
    ACTIONS(296), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3206] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(56), 1,
      sym_primary,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3246] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(298), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3268] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(303), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3290] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(305), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3312] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3334] = 1,
    ACTIONS(312), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3352] = 4,
    ACTIONS(316), 2,
      sym__non_zero,
      sym__zero,
    STATE(109), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(58), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(314), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3376] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(319), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3398] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(56), 1,
      sym_primary,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3438] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(319), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3460] = 3,
    ACTIONS(265), 1,
      anon_sym_o,
    STATE(90), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(321), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3482] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(56), 1,
      sym_primary,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3522] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3562] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(43), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3602] = 1,
    ACTIONS(323), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3620] = 1,
    ACTIONS(325), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3638] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(267), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3660] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(312), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3682] = 1,
    ACTIONS(291), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3699] = 1,
    ACTIONS(50), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3716] = 1,
    ACTIONS(305), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3733] = 1,
    ACTIONS(46), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3750] = 1,
    ACTIONS(330), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3767] = 1,
    ACTIONS(332), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3784] = 1,
    ACTIONS(334), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3801] = 1,
    ACTIONS(298), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3818] = 1,
    ACTIONS(48), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3835] = 7,
    ACTIONS(338), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(344), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(346), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(131), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(342), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(336), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(340), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
  [3864] = 7,
    ACTIONS(338), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(344), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(346), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(133), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(342), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(340), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(348), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [3893] = 1,
    ACTIONS(25), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
  [3910] = 7,
    ACTIONS(352), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(361), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(364), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(133), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(358), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(350), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(355), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
  [3939] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(367), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(369), 1,
      anon_sym_inverse,
    STATE(92), 1,
      sym_object_property_expression,
    STATE(135), 1,
      sym_object_property_expression_annotated_list,
    STATE(174), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(117), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [3974] = 1,
    ACTIONS(350), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
  [3990] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(264), 1,
      sym_datatype,
    STATE(37), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4018] = 2,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(65), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [4036] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(367), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(369), 1,
      anon_sym_inverse,
    STATE(123), 1,
      sym_object_property_expression,
    STATE(157), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(117), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [4068] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(45), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4102] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(45), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4136] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_iri,
    STATE(46), 1,
      sym__class_iri,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 1,
      sym__data_property_iri,
    STATE(45), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4170] = 4,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(85), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(371), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4191] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(150), 1,
      sym_annotation,
    STATE(190), 1,
      sym_annotation_annotated_list,
    STATE(220), 1,
      sym_annotations,
    STATE(47), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4222] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(18), 1,
      sym_annotation,
    STATE(135), 1,
      sym_annotation_annotated_list,
    STATE(210), 1,
      sym_annotations,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4253] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(18), 1,
      sym_annotation,
    STATE(210), 1,
      sym_annotations,
    STATE(284), 1,
      sym_annotation_annotated_list,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4284] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(217), 1,
      sym_annotations,
    STATE(282), 1,
      sym_annotation,
    STATE(327), 1,
      sym_annotation_annotated_list,
    STATE(58), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4315] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(383), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4336] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(18), 1,
      sym_annotation,
    STATE(210), 1,
      sym_annotations,
    STATE(270), 1,
      sym_annotation_annotated_list,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4367] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(18), 1,
      sym_annotation,
    STATE(210), 1,
      sym_annotations,
    STATE(256), 1,
      sym_annotation_annotated_list,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4398] = 4,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(388), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4419] = 4,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(390), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4440] = 4,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(390), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4461] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(209), 1,
      sym_annotations,
    STATE(292), 1,
      sym_annotation,
    STATE(344), 1,
      sym_annotation_annotated_list,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4492] = 9,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(224), 1,
      sym_annotations,
    STATE(263), 1,
      sym_annotation,
    STATE(295), 1,
      sym_annotation_annotated_list,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4523] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(392), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_restriction,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4551] = 2,
    ACTIONS(46), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(394), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4567] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(369), 1,
      anon_sym_inverse,
    STATE(126), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(117), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [4593] = 2,
    ACTIONS(50), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(396), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4609] = 2,
    ACTIONS(48), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(398), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4625] = 8,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(27), 1,
      sym_annotation,
    STATE(227), 1,
      sym_annotations,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4653] = 7,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(402), 1,
      anon_sym_inverse,
    ACTIONS(404), 1,
      sym__pn_local,
    ACTIONS(406), 1,
      sym__pname_ln,
    STATE(121), 1,
      sym_object_property_expression,
    STATE(117), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(129), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4679] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(408), 1,
      anon_sym_not,
    STATE(188), 1,
      sym_restriction,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4707] = 2,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(410), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4723] = 2,
    ACTIONS(25), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(412), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4739] = 6,
    ACTIONS(203), 1,
      sym__quotedString,
    ACTIONS(199), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      sym__non_zero,
      sym__zero,
    STATE(11), 2,
      aux_sym__digits,
      sym__digit,
    STATE(16), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(343), 2,
      sym_literal,
      sym__restriction_value,
  [4763] = 2,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(416), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4779] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(418), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_restriction,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4807] = 5,
    ACTIONS(420), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_object_property_characteristic,
    STATE(135), 1,
      sym_object_property_characteristic_annotated_list,
    STATE(239), 1,
      sym_annotations,
    ACTIONS(422), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [4829] = 2,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(424), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4845] = 7,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(402), 1,
      anon_sym_inverse,
    ACTIONS(404), 1,
      sym__pn_local,
    ACTIONS(406), 1,
      sym__pname_ln,
    STATE(113), 1,
      sym_object_property_expression,
    STATE(117), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(129), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4871] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(426), 1,
      anon_sym_not,
    STATE(72), 1,
      sym_restriction,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4899] = 8,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(206), 1,
      sym_annotations,
    STATE(294), 1,
      sym_annotation,
    STATE(58), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4927] = 2,
    ACTIONS(91), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(428), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4943] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(369), 1,
      anon_sym_inverse,
    STATE(119), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(117), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [4969] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(430), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_restriction,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4997] = 2,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(383), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [5013] = 8,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(223), 1,
      sym_annotations,
    STATE(325), 1,
      sym_annotation,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5041] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(432), 1,
      anon_sym_not,
    STATE(310), 1,
      sym_restriction,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5069] = 8,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(176), 1,
      sym_annotation,
    STATE(226), 1,
      sym_annotations,
    STATE(47), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5097] = 8,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(218), 1,
      sym_annotations,
    STATE(275), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5125] = 6,
    ACTIONS(203), 1,
      sym__quotedString,
    ACTIONS(199), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      sym__non_zero,
      sym__zero,
    STATE(11), 2,
      aux_sym__digits,
      sym__digit,
    STATE(16), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(352), 2,
      sym_literal,
      sym__restriction_value,
  [5149] = 3,
    ACTIONS(434), 1,
      anon_sym_and,
    STATE(189), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5166] = 4,
    ACTIONS(314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(436), 2,
      sym__non_zero,
      sym__zero,
    STATE(183), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(58), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5185] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(201), 1,
      sym_restriction,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5210] = 3,
    STATE(181), 1,
      sym_facet,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5227] = 3,
    STATE(165), 1,
      sym_facet,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5244] = 3,
    ACTIONS(443), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5261] = 3,
    ACTIONS(434), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(226), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5278] = 3,
    ACTIONS(445), 1,
      anon_sym_and,
    STATE(189), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5295] = 2,
    ACTIONS(448), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(450), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [5310] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(76), 1,
      sym_restriction,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5335] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(309), 1,
      sym_restriction,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5360] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym_restriction,
    STATE(367), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5385] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym_restriction,
    STATE(347), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5410] = 4,
    ACTIONS(420), 1,
      anon_sym_Annotations_COLON,
    STATE(128), 1,
      sym_object_property_characteristic,
    STATE(242), 1,
      sym_annotations,
    ACTIONS(422), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [5429] = 3,
    ACTIONS(443), 1,
      anon_sym_and,
    STATE(199), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5446] = 3,
    ACTIONS(434), 1,
      anon_sym_and,
    STATE(189), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5463] = 2,
    ACTIONS(452), 1,
      anon_sym_that,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5478] = 3,
    ACTIONS(454), 1,
      anon_sym_and,
    STATE(199), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5495] = 4,
    ACTIONS(273), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(457), 2,
      sym__non_zero,
      sym__zero,
    STATE(183), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(56), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5514] = 3,
    ACTIONS(434), 1,
      anon_sym_and,
    STATE(197), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5531] = 4,
    ACTIONS(277), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(457), 2,
      sym__non_zero,
      sym__zero,
    STATE(183), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(52), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5550] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym_restriction,
    STATE(361), 1,
      sym_data_property_expression,
    STATE(370), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5575] = 3,
    ACTIONS(461), 1,
      anon_sym_and,
    STATE(214), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(459), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5591] = 6,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(465), 1,
      anon_sym_Class_COLON,
    ACTIONS(467), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(219), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5613] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(296), 1,
      sym_annotation,
    STATE(58), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5635] = 3,
    ACTIONS(471), 1,
      anon_sym_and,
    STATE(207), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5651] = 6,
    ACTIONS(463), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(465), 1,
      anon_sym_Class_COLON,
    ACTIONS(467), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    STATE(219), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5673] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(298), 1,
      sym_annotation,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5695] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(17), 1,
      sym_annotation,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5717] = 3,
    ACTIONS(476), 1,
      anon_sym_or,
    STATE(212), 1,
      aux_sym_description_repeat1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5733] = 3,
    ACTIONS(478), 1,
      anon_sym_or,
    STATE(212), 1,
      aux_sym_description_repeat1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5749] = 4,
    ACTIONS(314), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(481), 2,
      sym__non_zero,
      sym__zero,
    STATE(213), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5767] = 3,
    ACTIONS(461), 1,
      anon_sym_and,
    STATE(207), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5783] = 4,
    ACTIONS(273), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(486), 2,
      sym__non_zero,
      sym__zero,
    STATE(213), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(56), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5801] = 4,
    ACTIONS(277), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(486), 2,
      sym__non_zero,
      sym__zero,
    STATE(213), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(52), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5819] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(269), 1,
      sym_annotation,
    STATE(58), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5841] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(277), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5863] = 6,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(493), 1,
      anon_sym_Class_COLON,
    ACTIONS(496), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(219), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5885] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(151), 1,
      sym_annotation,
    STATE(47), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5907] = 6,
    ACTIONS(463), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(465), 1,
      anon_sym_Class_COLON,
    ACTIONS(467), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    STATE(219), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5929] = 6,
    ACTIONS(463), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(465), 1,
      anon_sym_Class_COLON,
    ACTIONS(467), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    STATE(208), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(331), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5951] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(314), 1,
      sym_annotation,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5973] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(251), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5995] = 3,
    ACTIONS(476), 1,
      anon_sym_or,
    STATE(211), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6011] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(163), 1,
      sym_annotation,
    STATE(47), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6033] = 6,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym__pn_local,
    ACTIONS(381), 1,
      sym__pname_ln,
    STATE(24), 1,
      sym_annotation,
    STATE(62), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(237), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6055] = 4,
    ACTIONS(314), 1,
      sym__pn_local,
    ACTIONS(501), 2,
      sym__non_zero,
      sym__zero,
    STATE(228), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6072] = 4,
    ACTIONS(273), 1,
      sym__pn_local,
    ACTIONS(504), 2,
      sym__non_zero,
      sym__zero,
    STATE(228), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(56), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6089] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(289), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6104] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6119] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(118), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6138] = 3,
    ACTIONS(510), 1,
      anon_sym_or,
    STATE(247), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(508), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6153] = 4,
    ACTIONS(277), 1,
      sym__pn_local,
    ACTIONS(504), 2,
      sym__non_zero,
      sym__zero,
    STATE(228), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(52), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6170] = 2,
    ACTIONS(46), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(394), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [6183] = 2,
    ACTIONS(50), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(396), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [6196] = 2,
    ACTIONS(48), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(398), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [6209] = 2,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(412), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [6222] = 2,
    STATE(110), 1,
      sym_object_property_characteristic,
    ACTIONS(422), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [6235] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(130), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6254] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6269] = 2,
    STATE(127), 1,
      sym_object_property_characteristic,
    ACTIONS(422), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [6282] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(283), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6297] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(250), 2,
      sym_iri,
      sym__class_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6316] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6331] = 1,
    ACTIONS(469), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6342] = 3,
    ACTIONS(510), 1,
      anon_sym_or,
    STATE(249), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(515), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6357] = 5,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(404), 1,
      sym__pn_local,
    ACTIONS(406), 1,
      sym__pname_ln,
    STATE(118), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(129), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6376] = 3,
    ACTIONS(519), 1,
      anon_sym_or,
    STATE(249), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(517), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6391] = 4,
    ACTIONS(524), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_SubClassOf_COLON,
    STATE(258), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6407] = 4,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(390), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6423] = 1,
    ACTIONS(517), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6433] = 2,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(394), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [6445] = 4,
    ACTIONS(533), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(536), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(260), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(530), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6461] = 2,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(396), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [6473] = 1,
    ACTIONS(448), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [6483] = 2,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(398), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [6495] = 4,
    ACTIONS(524), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_SubClassOf_COLON,
    STATE(265), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(538), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6511] = 4,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(544), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(254), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(540), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6527] = 3,
    ACTIONS(533), 1,
      anon_sym_Annotations_COLON,
    STATE(260), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(536), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6541] = 2,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(412), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [6553] = 4,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(383), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6569] = 4,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(388), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6585] = 4,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(551), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(259), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6601] = 4,
    ACTIONS(555), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(558), 1,
      anon_sym_SubClassOf_COLON,
    STATE(265), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(553), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6617] = 4,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(371), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(85), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6633] = 4,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(390), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6649] = 3,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    STATE(285), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6662] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(390), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6677] = 1,
    ACTIONS(536), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6686] = 2,
    ACTIONS(424), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6697] = 3,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    STATE(283), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6710] = 2,
    ACTIONS(412), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6721] = 2,
    ACTIONS(398), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(48), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6732] = 2,
    ACTIONS(383), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6743] = 2,
    ACTIONS(428), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(91), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6754] = 2,
    ACTIONS(410), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(89), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6765] = 2,
    ACTIONS(396), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(50), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6776] = 2,
    ACTIONS(394), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(46), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6787] = 4,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(77), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(383), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6802] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(85), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(371), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6817] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(388), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6832] = 3,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    STATE(260), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(570), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6845] = 1,
    ACTIONS(553), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [6854] = 3,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    STATE(260), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6867] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(390), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6882] = 2,
    ACTIONS(416), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6893] = 2,
    ACTIONS(424), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6903] = 4,
    ACTIONS(371), 1,
      sym__pn_local,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(85), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6917] = 2,
    ACTIONS(416), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6927] = 3,
    ACTIONS(576), 1,
      anon_sym_SLASH,
    STATE(299), 1,
      aux_sym__ipath_abempty,
    ACTIONS(574), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [6939] = 4,
    ACTIONS(388), 1,
      sym__pn_local,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6953] = 2,
    ACTIONS(428), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6963] = 2,
    ACTIONS(383), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6973] = 2,
    ACTIONS(450), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(448), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6983] = 2,
    ACTIONS(410), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6993] = 1,
    ACTIONS(578), 5,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__quotedString,
  [7001] = 4,
    ACTIONS(390), 1,
      sym__pn_local,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      sym__pname_ln,
  [7015] = 3,
    ACTIONS(582), 1,
      anon_sym_SLASH,
    STATE(299), 1,
      aux_sym__ipath_abempty,
    ACTIONS(580), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [7027] = 4,
    ACTIONS(383), 1,
      sym__pn_local,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(77), 2,
      anon_sym_LT,
      sym__pname_ln,
  [7041] = 2,
    ACTIONS(394), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(46), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7051] = 2,
    ACTIONS(396), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(50), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7061] = 2,
    ACTIONS(398), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(48), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7071] = 2,
    ACTIONS(412), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7081] = 4,
    ACTIONS(390), 1,
      sym__pn_local,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      sym__pname_ln,
  [7095] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(376), 1,
      sym_ontology,
    STATE(318), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [7109] = 4,
    ACTIONS(588), 1,
      sym__iunreserved,
    STATE(349), 1,
      sym__ihost,
    STATE(350), 1,
      sym__iauthority,
    STATE(394), 1,
      sym__iuserinfo,
  [7122] = 2,
    ACTIONS(590), 2,
      sym__non_zero,
      sym__zero,
    STATE(200), 2,
      aux_sym__digits,
      sym__digit,
  [7131] = 3,
    ACTIONS(592), 1,
      anon_sym_and,
    STATE(332), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7142] = 3,
    ACTIONS(592), 1,
      anon_sym_and,
    STATE(335), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(226), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7153] = 3,
    ACTIONS(594), 1,
      anon_sym_and,
    STATE(319), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7164] = 2,
    ACTIONS(596), 2,
      sym__non_zero,
      sym__zero,
    STATE(12), 2,
      aux_sym__digits,
      sym__digit,
  [7173] = 2,
    ACTIONS(598), 2,
      sym__non_zero,
      sym__zero,
    STATE(93), 2,
      aux_sym__digits,
      sym__digit,
  [7182] = 2,
    ACTIONS(410), 1,
      sym__pn_local,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7191] = 4,
    ACTIONS(600), 1,
      sym__non_zero,
    ACTIONS(602), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(14), 1,
      sym__positive_integer,
  [7204] = 2,
    ACTIONS(604), 1,
      anon_sym_that,
    ACTIONS(131), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
  [7213] = 2,
    ACTIONS(606), 2,
      sym__non_zero,
      sym__zero,
    STATE(229), 2,
      aux_sym__digits,
      sym__digit,
  [7222] = 3,
    ACTIONS(608), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(610), 1,
      anon_sym_Prefix_COLON,
    STATE(318), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [7233] = 3,
    ACTIONS(594), 1,
      anon_sym_and,
    STATE(337), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7244] = 2,
    ACTIONS(613), 2,
      sym__non_zero,
      sym__zero,
    STATE(215), 2,
      aux_sym__digits,
      sym__digit,
  [7253] = 2,
    ACTIONS(428), 1,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7262] = 4,
    ACTIONS(615), 1,
      sym__non_zero,
    ACTIONS(617), 1,
      sym__zero,
    STATE(25), 1,
      sym_non_negative_integer,
    STATE(137), 1,
      sym__positive_integer,
  [7275] = 2,
    ACTIONS(424), 1,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7284] = 2,
    ACTIONS(416), 1,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7293] = 2,
    ACTIONS(383), 1,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7302] = 4,
    ACTIONS(619), 1,
      sym__non_zero,
    ACTIONS(621), 1,
      sym__zero,
    STATE(10), 1,
      sym_non_negative_integer,
    STATE(39), 1,
      sym__positive_integer,
  [7315] = 2,
    ACTIONS(448), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(450), 2,
      anon_sym_inverse,
      sym__pn_local,
  [7324] = 2,
    ACTIONS(412), 1,
      sym__pn_local,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7333] = 2,
    ACTIONS(398), 1,
      sym__pn_local,
    ACTIONS(48), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7342] = 3,
    ACTIONS(623), 1,
      anon_sym_and,
    STATE(330), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(175), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7353] = 1,
    ACTIONS(626), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [7360] = 3,
    ACTIONS(592), 1,
      anon_sym_and,
    STATE(330), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7371] = 2,
    ACTIONS(396), 1,
      sym__pn_local,
    ACTIONS(50), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7380] = 2,
    ACTIONS(394), 1,
      sym__pn_local,
    ACTIONS(46), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [7389] = 3,
    ACTIONS(592), 1,
      anon_sym_and,
    STATE(330), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7400] = 1,
    ACTIONS(580), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [7407] = 3,
    ACTIONS(628), 1,
      anon_sym_and,
    STATE(337), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(191), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7418] = 3,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(631), 1,
      anon_sym_or,
    STATE(338), 1,
      aux_sym_description_repeat1,
  [7428] = 3,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_datatype_restriction_repeat1,
  [7438] = 3,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_or,
    STATE(338), 1,
      aux_sym_description_repeat1,
  [7448] = 2,
    ACTIONS(643), 1,
      anon_sym_AT,
    ACTIONS(641), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [7456] = 3,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_or,
    STATE(340), 1,
      aux_sym_description_repeat1,
  [7466] = 3,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_datatype_restriction_repeat1,
  [7476] = 2,
    ACTIONS(450), 1,
      sym__pn_local,
    ACTIONS(448), 2,
      anon_sym_LT,
      sym__pname_ln,
  [7484] = 3,
    ACTIONS(649), 1,
      anon_sym_GT,
    ACTIONS(651), 1,
      sym__iquery,
    ACTIONS(653), 1,
      sym__ifragment,
  [7494] = 3,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_datatype_restriction_repeat1,
  [7504] = 2,
    ACTIONS(657), 1,
      anon_sym_only,
    ACTIONS(659), 1,
      anon_sym_exactly,
  [7511] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(391), 1,
      sym__iri_rfc3987,
  [7518] = 2,
    ACTIONS(663), 1,
      anon_sym_COLON,
    ACTIONS(665), 1,
      anon_sym_SLASH,
  [7525] = 2,
    ACTIONS(576), 1,
      anon_sym_SLASH,
    STATE(291), 1,
      aux_sym__ipath_abempty,
  [7532] = 2,
    ACTIONS(667), 1,
      anon_sym_Annotations_COLON,
    STATE(32), 1,
      sym_annotations,
  [7539] = 1,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7544] = 2,
    ACTIONS(671), 1,
      anon_sym_SLASH_SLASH,
    STATE(345), 1,
      sym__ihier_part,
  [7551] = 1,
    ACTIONS(673), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [7556] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(378), 1,
      sym__iri_rfc3987,
  [7563] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(375), 1,
      sym__iri_rfc3987,
  [7570] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(374), 1,
      sym__iri_rfc3987,
  [7577] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(372), 1,
      sym__iri_rfc3987,
  [7584] = 2,
    ACTIONS(675), 1,
      anon_sym_COLON,
    ACTIONS(677), 1,
      anon_sym_SLASH,
  [7591] = 2,
    ACTIONS(679), 1,
      anon_sym_Annotations_COLON,
    STATE(170), 1,
      sym_annotations,
  [7598] = 2,
    ACTIONS(681), 1,
      anon_sym_only,
    ACTIONS(683), 1,
      anon_sym_exactly,
  [7605] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(381), 1,
      sym__iri_rfc3987,
  [7612] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(383), 1,
      sym__iri_rfc3987,
  [7619] = 2,
    ACTIONS(667), 1,
      anon_sym_Annotations_COLON,
    STATE(29), 1,
      sym_annotations,
  [7626] = 2,
    ACTIONS(685), 1,
      sym__iunreserved,
    STATE(359), 1,
      sym__ihost,
  [7633] = 2,
    ACTIONS(687), 1,
      anon_sym_GT,
    ACTIONS(689), 1,
      sym__ifragment,
  [7640] = 2,
    ACTIONS(691), 1,
      anon_sym_only,
    ACTIONS(693), 1,
      anon_sym_exactly,
  [7647] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(354), 1,
      sym_full_iri,
  [7654] = 2,
    ACTIONS(661), 1,
      sym__scheme,
    STATE(393), 1,
      sym__iri_rfc3987,
  [7661] = 1,
    ACTIONS(695), 2,
      anon_sym_only,
      anon_sym_exactly,
  [7666] = 2,
    ACTIONS(697), 1,
      sym__iunreserved,
    STATE(336), 1,
      sym__isegment,
  [7673] = 1,
    ACTIONS(699), 1,
      anon_sym_GT,
  [7677] = 1,
    ACTIONS(701), 1,
      anon_sym_SLASH,
  [7681] = 1,
    ACTIONS(703), 1,
      anon_sym_GT,
  [7685] = 1,
    ACTIONS(705), 1,
      anon_sym_GT,
  [7689] = 1,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
  [7693] = 1,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [7697] = 1,
    ACTIONS(711), 1,
      anon_sym_GT,
  [7701] = 1,
    ACTIONS(713), 1,
      sym__port,
  [7705] = 1,
    ACTIONS(677), 1,
      anon_sym_SLASH,
  [7709] = 1,
    ACTIONS(715), 1,
      anon_sym_GT,
  [7713] = 1,
    ACTIONS(717), 1,
      sym_prefix_name,
  [7717] = 1,
    ACTIONS(719), 1,
      anon_sym_GT,
  [7721] = 1,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [7725] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [7729] = 1,
    ACTIONS(725), 1,
      sym__port,
  [7733] = 1,
    ACTIONS(727), 1,
      anon_sym_GT,
  [7737] = 1,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
  [7741] = 1,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
  [7745] = 1,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
  [7749] = 1,
    ACTIONS(735), 1,
      anon_sym_GT,
  [7753] = 1,
    ACTIONS(687), 1,
      anon_sym_GT,
  [7757] = 1,
    ACTIONS(737), 1,
      anon_sym_GT,
  [7761] = 1,
    ACTIONS(739), 1,
      anon_sym_AT,
  [7765] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 249,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 406,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 537,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 653,
  [SMALL_STATE(21)] = 685,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 747,
  [SMALL_STATE(24)] = 777,
  [SMALL_STATE(25)] = 802,
  [SMALL_STATE(26)] = 855,
  [SMALL_STATE(27)] = 880,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 930,
  [SMALL_STATE(30)] = 982,
  [SMALL_STATE(31)] = 1034,
  [SMALL_STATE(32)] = 1060,
  [SMALL_STATE(33)] = 1112,
  [SMALL_STATE(34)] = 1167,
  [SMALL_STATE(35)] = 1216,
  [SMALL_STATE(36)] = 1271,
  [SMALL_STATE(37)] = 1323,
  [SMALL_STATE(38)] = 1345,
  [SMALL_STATE(39)] = 1369,
  [SMALL_STATE(40)] = 1393,
  [SMALL_STATE(41)] = 1445,
  [SMALL_STATE(42)] = 1491,
  [SMALL_STATE(43)] = 1512,
  [SMALL_STATE(44)] = 1533,
  [SMALL_STATE(45)] = 1576,
  [SMALL_STATE(46)] = 1597,
  [SMALL_STATE(47)] = 1618,
  [SMALL_STATE(48)] = 1661,
  [SMALL_STATE(49)] = 1682,
  [SMALL_STATE(50)] = 1703,
  [SMALL_STATE(51)] = 1724,
  [SMALL_STATE(52)] = 1767,
  [SMALL_STATE(53)] = 1788,
  [SMALL_STATE(54)] = 1809,
  [SMALL_STATE(55)] = 1830,
  [SMALL_STATE(56)] = 1851,
  [SMALL_STATE(57)] = 1872,
  [SMALL_STATE(58)] = 1893,
  [SMALL_STATE(59)] = 1936,
  [SMALL_STATE(60)] = 1957,
  [SMALL_STATE(61)] = 1978,
  [SMALL_STATE(62)] = 1999,
  [SMALL_STATE(63)] = 2042,
  [SMALL_STATE(64)] = 2066,
  [SMALL_STATE(65)] = 2106,
  [SMALL_STATE(66)] = 2152,
  [SMALL_STATE(67)] = 2176,
  [SMALL_STATE(68)] = 2216,
  [SMALL_STATE(69)] = 2262,
  [SMALL_STATE(70)] = 2284,
  [SMALL_STATE(71)] = 2308,
  [SMALL_STATE(72)] = 2354,
  [SMALL_STATE(73)] = 2378,
  [SMALL_STATE(74)] = 2424,
  [SMALL_STATE(75)] = 2448,
  [SMALL_STATE(76)] = 2468,
  [SMALL_STATE(77)] = 2492,
  [SMALL_STATE(78)] = 2532,
  [SMALL_STATE(79)] = 2556,
  [SMALL_STATE(80)] = 2602,
  [SMALL_STATE(81)] = 2628,
  [SMALL_STATE(82)] = 2654,
  [SMALL_STATE(83)] = 2678,
  [SMALL_STATE(84)] = 2704,
  [SMALL_STATE(85)] = 2727,
  [SMALL_STATE(86)] = 2770,
  [SMALL_STATE(87)] = 2813,
  [SMALL_STATE(88)] = 2856,
  [SMALL_STATE(89)] = 2879,
  [SMALL_STATE(90)] = 2902,
  [SMALL_STATE(91)] = 2924,
  [SMALL_STATE(92)] = 2946,
  [SMALL_STATE(93)] = 2968,
  [SMALL_STATE(94)] = 2992,
  [SMALL_STATE(95)] = 3016,
  [SMALL_STATE(96)] = 3038,
  [SMALL_STATE(97)] = 3060,
  [SMALL_STATE(98)] = 3082,
  [SMALL_STATE(99)] = 3104,
  [SMALL_STATE(100)] = 3144,
  [SMALL_STATE(101)] = 3166,
  [SMALL_STATE(102)] = 3188,
  [SMALL_STATE(103)] = 3206,
  [SMALL_STATE(104)] = 3246,
  [SMALL_STATE(105)] = 3268,
  [SMALL_STATE(106)] = 3290,
  [SMALL_STATE(107)] = 3312,
  [SMALL_STATE(108)] = 3334,
  [SMALL_STATE(109)] = 3352,
  [SMALL_STATE(110)] = 3376,
  [SMALL_STATE(111)] = 3398,
  [SMALL_STATE(112)] = 3438,
  [SMALL_STATE(113)] = 3460,
  [SMALL_STATE(114)] = 3482,
  [SMALL_STATE(115)] = 3522,
  [SMALL_STATE(116)] = 3562,
  [SMALL_STATE(117)] = 3602,
  [SMALL_STATE(118)] = 3620,
  [SMALL_STATE(119)] = 3638,
  [SMALL_STATE(120)] = 3660,
  [SMALL_STATE(121)] = 3682,
  [SMALL_STATE(122)] = 3699,
  [SMALL_STATE(123)] = 3716,
  [SMALL_STATE(124)] = 3733,
  [SMALL_STATE(125)] = 3750,
  [SMALL_STATE(126)] = 3767,
  [SMALL_STATE(127)] = 3784,
  [SMALL_STATE(128)] = 3801,
  [SMALL_STATE(129)] = 3818,
  [SMALL_STATE(130)] = 3835,
  [SMALL_STATE(131)] = 3864,
  [SMALL_STATE(132)] = 3893,
  [SMALL_STATE(133)] = 3910,
  [SMALL_STATE(134)] = 3939,
  [SMALL_STATE(135)] = 3974,
  [SMALL_STATE(136)] = 3990,
  [SMALL_STATE(137)] = 4018,
  [SMALL_STATE(138)] = 4036,
  [SMALL_STATE(139)] = 4068,
  [SMALL_STATE(140)] = 4102,
  [SMALL_STATE(141)] = 4136,
  [SMALL_STATE(142)] = 4170,
  [SMALL_STATE(143)] = 4191,
  [SMALL_STATE(144)] = 4222,
  [SMALL_STATE(145)] = 4253,
  [SMALL_STATE(146)] = 4284,
  [SMALL_STATE(147)] = 4315,
  [SMALL_STATE(148)] = 4336,
  [SMALL_STATE(149)] = 4367,
  [SMALL_STATE(150)] = 4398,
  [SMALL_STATE(151)] = 4419,
  [SMALL_STATE(152)] = 4440,
  [SMALL_STATE(153)] = 4461,
  [SMALL_STATE(154)] = 4492,
  [SMALL_STATE(155)] = 4523,
  [SMALL_STATE(156)] = 4551,
  [SMALL_STATE(157)] = 4567,
  [SMALL_STATE(158)] = 4593,
  [SMALL_STATE(159)] = 4609,
  [SMALL_STATE(160)] = 4625,
  [SMALL_STATE(161)] = 4653,
  [SMALL_STATE(162)] = 4679,
  [SMALL_STATE(163)] = 4707,
  [SMALL_STATE(164)] = 4723,
  [SMALL_STATE(165)] = 4739,
  [SMALL_STATE(166)] = 4763,
  [SMALL_STATE(167)] = 4779,
  [SMALL_STATE(168)] = 4807,
  [SMALL_STATE(169)] = 4829,
  [SMALL_STATE(170)] = 4845,
  [SMALL_STATE(171)] = 4871,
  [SMALL_STATE(172)] = 4899,
  [SMALL_STATE(173)] = 4927,
  [SMALL_STATE(174)] = 4943,
  [SMALL_STATE(175)] = 4969,
  [SMALL_STATE(176)] = 4997,
  [SMALL_STATE(177)] = 5013,
  [SMALL_STATE(178)] = 5041,
  [SMALL_STATE(179)] = 5069,
  [SMALL_STATE(180)] = 5097,
  [SMALL_STATE(181)] = 5125,
  [SMALL_STATE(182)] = 5149,
  [SMALL_STATE(183)] = 5166,
  [SMALL_STATE(184)] = 5185,
  [SMALL_STATE(185)] = 5210,
  [SMALL_STATE(186)] = 5227,
  [SMALL_STATE(187)] = 5244,
  [SMALL_STATE(188)] = 5261,
  [SMALL_STATE(189)] = 5278,
  [SMALL_STATE(190)] = 5295,
  [SMALL_STATE(191)] = 5310,
  [SMALL_STATE(192)] = 5335,
  [SMALL_STATE(193)] = 5360,
  [SMALL_STATE(194)] = 5385,
  [SMALL_STATE(195)] = 5410,
  [SMALL_STATE(196)] = 5429,
  [SMALL_STATE(197)] = 5446,
  [SMALL_STATE(198)] = 5463,
  [SMALL_STATE(199)] = 5478,
  [SMALL_STATE(200)] = 5495,
  [SMALL_STATE(201)] = 5514,
  [SMALL_STATE(202)] = 5531,
  [SMALL_STATE(203)] = 5550,
  [SMALL_STATE(204)] = 5575,
  [SMALL_STATE(205)] = 5591,
  [SMALL_STATE(206)] = 5613,
  [SMALL_STATE(207)] = 5635,
  [SMALL_STATE(208)] = 5651,
  [SMALL_STATE(209)] = 5673,
  [SMALL_STATE(210)] = 5695,
  [SMALL_STATE(211)] = 5717,
  [SMALL_STATE(212)] = 5733,
  [SMALL_STATE(213)] = 5749,
  [SMALL_STATE(214)] = 5767,
  [SMALL_STATE(215)] = 5783,
  [SMALL_STATE(216)] = 5801,
  [SMALL_STATE(217)] = 5819,
  [SMALL_STATE(218)] = 5841,
  [SMALL_STATE(219)] = 5863,
  [SMALL_STATE(220)] = 5885,
  [SMALL_STATE(221)] = 5907,
  [SMALL_STATE(222)] = 5929,
  [SMALL_STATE(223)] = 5951,
  [SMALL_STATE(224)] = 5973,
  [SMALL_STATE(225)] = 5995,
  [SMALL_STATE(226)] = 6011,
  [SMALL_STATE(227)] = 6033,
  [SMALL_STATE(228)] = 6055,
  [SMALL_STATE(229)] = 6072,
  [SMALL_STATE(230)] = 6089,
  [SMALL_STATE(231)] = 6104,
  [SMALL_STATE(232)] = 6119,
  [SMALL_STATE(233)] = 6138,
  [SMALL_STATE(234)] = 6153,
  [SMALL_STATE(235)] = 6170,
  [SMALL_STATE(236)] = 6183,
  [SMALL_STATE(237)] = 6196,
  [SMALL_STATE(238)] = 6209,
  [SMALL_STATE(239)] = 6222,
  [SMALL_STATE(240)] = 6235,
  [SMALL_STATE(241)] = 6254,
  [SMALL_STATE(242)] = 6269,
  [SMALL_STATE(243)] = 6282,
  [SMALL_STATE(244)] = 6297,
  [SMALL_STATE(245)] = 6316,
  [SMALL_STATE(246)] = 6331,
  [SMALL_STATE(247)] = 6342,
  [SMALL_STATE(248)] = 6357,
  [SMALL_STATE(249)] = 6376,
  [SMALL_STATE(250)] = 6391,
  [SMALL_STATE(251)] = 6407,
  [SMALL_STATE(252)] = 6423,
  [SMALL_STATE(253)] = 6433,
  [SMALL_STATE(254)] = 6445,
  [SMALL_STATE(255)] = 6461,
  [SMALL_STATE(256)] = 6473,
  [SMALL_STATE(257)] = 6483,
  [SMALL_STATE(258)] = 6495,
  [SMALL_STATE(259)] = 6511,
  [SMALL_STATE(260)] = 6527,
  [SMALL_STATE(261)] = 6541,
  [SMALL_STATE(262)] = 6553,
  [SMALL_STATE(263)] = 6569,
  [SMALL_STATE(264)] = 6585,
  [SMALL_STATE(265)] = 6601,
  [SMALL_STATE(266)] = 6617,
  [SMALL_STATE(267)] = 6633,
  [SMALL_STATE(268)] = 6649,
  [SMALL_STATE(269)] = 6662,
  [SMALL_STATE(270)] = 6677,
  [SMALL_STATE(271)] = 6686,
  [SMALL_STATE(272)] = 6697,
  [SMALL_STATE(273)] = 6710,
  [SMALL_STATE(274)] = 6721,
  [SMALL_STATE(275)] = 6732,
  [SMALL_STATE(276)] = 6743,
  [SMALL_STATE(277)] = 6754,
  [SMALL_STATE(278)] = 6765,
  [SMALL_STATE(279)] = 6776,
  [SMALL_STATE(280)] = 6787,
  [SMALL_STATE(281)] = 6802,
  [SMALL_STATE(282)] = 6817,
  [SMALL_STATE(283)] = 6832,
  [SMALL_STATE(284)] = 6845,
  [SMALL_STATE(285)] = 6854,
  [SMALL_STATE(286)] = 6867,
  [SMALL_STATE(287)] = 6882,
  [SMALL_STATE(288)] = 6893,
  [SMALL_STATE(289)] = 6903,
  [SMALL_STATE(290)] = 6917,
  [SMALL_STATE(291)] = 6927,
  [SMALL_STATE(292)] = 6939,
  [SMALL_STATE(293)] = 6953,
  [SMALL_STATE(294)] = 6963,
  [SMALL_STATE(295)] = 6973,
  [SMALL_STATE(296)] = 6983,
  [SMALL_STATE(297)] = 6993,
  [SMALL_STATE(298)] = 7001,
  [SMALL_STATE(299)] = 7015,
  [SMALL_STATE(300)] = 7027,
  [SMALL_STATE(301)] = 7041,
  [SMALL_STATE(302)] = 7051,
  [SMALL_STATE(303)] = 7061,
  [SMALL_STATE(304)] = 7071,
  [SMALL_STATE(305)] = 7081,
  [SMALL_STATE(306)] = 7095,
  [SMALL_STATE(307)] = 7109,
  [SMALL_STATE(308)] = 7122,
  [SMALL_STATE(309)] = 7131,
  [SMALL_STATE(310)] = 7142,
  [SMALL_STATE(311)] = 7153,
  [SMALL_STATE(312)] = 7164,
  [SMALL_STATE(313)] = 7173,
  [SMALL_STATE(314)] = 7182,
  [SMALL_STATE(315)] = 7191,
  [SMALL_STATE(316)] = 7204,
  [SMALL_STATE(317)] = 7213,
  [SMALL_STATE(318)] = 7222,
  [SMALL_STATE(319)] = 7233,
  [SMALL_STATE(320)] = 7244,
  [SMALL_STATE(321)] = 7253,
  [SMALL_STATE(322)] = 7262,
  [SMALL_STATE(323)] = 7275,
  [SMALL_STATE(324)] = 7284,
  [SMALL_STATE(325)] = 7293,
  [SMALL_STATE(326)] = 7302,
  [SMALL_STATE(327)] = 7315,
  [SMALL_STATE(328)] = 7324,
  [SMALL_STATE(329)] = 7333,
  [SMALL_STATE(330)] = 7342,
  [SMALL_STATE(331)] = 7353,
  [SMALL_STATE(332)] = 7360,
  [SMALL_STATE(333)] = 7371,
  [SMALL_STATE(334)] = 7380,
  [SMALL_STATE(335)] = 7389,
  [SMALL_STATE(336)] = 7400,
  [SMALL_STATE(337)] = 7407,
  [SMALL_STATE(338)] = 7418,
  [SMALL_STATE(339)] = 7428,
  [SMALL_STATE(340)] = 7438,
  [SMALL_STATE(341)] = 7448,
  [SMALL_STATE(342)] = 7456,
  [SMALL_STATE(343)] = 7466,
  [SMALL_STATE(344)] = 7476,
  [SMALL_STATE(345)] = 7484,
  [SMALL_STATE(346)] = 7494,
  [SMALL_STATE(347)] = 7504,
  [SMALL_STATE(348)] = 7511,
  [SMALL_STATE(349)] = 7518,
  [SMALL_STATE(350)] = 7525,
  [SMALL_STATE(351)] = 7532,
  [SMALL_STATE(352)] = 7539,
  [SMALL_STATE(353)] = 7544,
  [SMALL_STATE(354)] = 7551,
  [SMALL_STATE(355)] = 7556,
  [SMALL_STATE(356)] = 7563,
  [SMALL_STATE(357)] = 7570,
  [SMALL_STATE(358)] = 7577,
  [SMALL_STATE(359)] = 7584,
  [SMALL_STATE(360)] = 7591,
  [SMALL_STATE(361)] = 7598,
  [SMALL_STATE(362)] = 7605,
  [SMALL_STATE(363)] = 7612,
  [SMALL_STATE(364)] = 7619,
  [SMALL_STATE(365)] = 7626,
  [SMALL_STATE(366)] = 7633,
  [SMALL_STATE(367)] = 7640,
  [SMALL_STATE(368)] = 7647,
  [SMALL_STATE(369)] = 7654,
  [SMALL_STATE(370)] = 7661,
  [SMALL_STATE(371)] = 7666,
  [SMALL_STATE(372)] = 7673,
  [SMALL_STATE(373)] = 7677,
  [SMALL_STATE(374)] = 7681,
  [SMALL_STATE(375)] = 7685,
  [SMALL_STATE(376)] = 7689,
  [SMALL_STATE(377)] = 7693,
  [SMALL_STATE(378)] = 7697,
  [SMALL_STATE(379)] = 7701,
  [SMALL_STATE(380)] = 7705,
  [SMALL_STATE(381)] = 7709,
  [SMALL_STATE(382)] = 7713,
  [SMALL_STATE(383)] = 7717,
  [SMALL_STATE(384)] = 7721,
  [SMALL_STATE(385)] = 7725,
  [SMALL_STATE(386)] = 7729,
  [SMALL_STATE(387)] = 7733,
  [SMALL_STATE(388)] = 7737,
  [SMALL_STATE(389)] = 7741,
  [SMALL_STATE(390)] = 7745,
  [SMALL_STATE(391)] = 7749,
  [SMALL_STATE(392)] = 7753,
  [SMALL_STATE(393)] = 7757,
  [SMALL_STATE(394)] = 7761,
  [SMALL_STATE(395)] = 7765,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(160),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(99),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(155),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(81),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(86),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(161),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(195),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(138),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(109),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_object_property, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(40),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(144),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(134),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(35),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(168),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(360),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(179),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(183),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(167),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(116),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2), SHIFT_REPEAT(41),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(85),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(213),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(136),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(244),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(240),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(228),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(36),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(34),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(148),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(180),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(145),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(33),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(172),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(371),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(177),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(382),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(175),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(115),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(87),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(185),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [733] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_owl2manchestersyntax(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
