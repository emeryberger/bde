// s_baltst_mysequencewithprecisiondecimalattribute.h *DO NOT EDIT* @generated -*-C++-*-
#ifndef INCLUDED_S_BALTST_MYSEQUENCEWITHPRECISIONDECIMALATTRIBUTE
#define INCLUDED_S_BALTST_MYSEQUENCEWITHPRECISIONDECIMALATTRIBUTE

#include <bsls_ident.h>
BSLS_IDENT_RCSID(s_baltst_mysequencewithprecisiondecimalattribute_h, "$Id$ $CSID$")
BSLS_IDENT_PRAGMA_ONCE

//@PURPOSE: Provide value-semantic attribute classes

#include <bslalg_typetraits.h>

#include <bdlat_attributeinfo.h>

#include <bdlat_selectioninfo.h>

#include <bdlat_typetraits.h>

#include <bsls_objectbuffer.h>

#include <bsls_assert.h>

#include <bdlb_nullablevalue.h>

#include <bdldfp_decimal.h>

#include <bsl_iosfwd.h>
#include <bsl_limits.h>

namespace BloombergLP {

namespace s_baltst { class MySequenceWithPrecisionDecimalAttribute; }
namespace s_baltst {

               // =============================================
               // class MySequenceWithPrecisionDecimalAttribute
               // =============================================

class MySequenceWithPrecisionDecimalAttribute {

    // INSTANCE DATA
    bdlb::NullableValue<bdldfp::Decimal64>  d_attribute1;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ATTRIBUTE1 = 0
    };

    enum {
        NUM_ATTRIBUTES = 1
    };

    enum {
        ATTRIBUTE_INDEX_ATTRIBUTE1 = 0
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdlat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static const bdlat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdlat_AttributeInfo *lookupAttributeInfo(
                                                       const char *name,
                                                       int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    MySequenceWithPrecisionDecimalAttribute();
        // Create an object of type 'MySequenceWithPrecisionDecimalAttribute'
        // having the default value.

    MySequenceWithPrecisionDecimalAttribute(const MySequenceWithPrecisionDecimalAttribute& original);
        // Create an object of type 'MySequenceWithPrecisionDecimalAttribute'
        // having the value of the specified 'original' object.

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
    MySequenceWithPrecisionDecimalAttribute(MySequenceWithPrecisionDecimalAttribute&& original) = default;
        // Create an object of type 'MySequenceWithPrecisionDecimalAttribute'
        // having the value of the specified 'original' object.  After
        // performing this action, the 'original' object will be left in a
        // valid, but unspecified state.
#endif

    ~MySequenceWithPrecisionDecimalAttribute();
        // Destroy this object.

    // MANIPULATORS
    MySequenceWithPrecisionDecimalAttribute& operator=(const MySequenceWithPrecisionDecimalAttribute& rhs);
        // Assign to this object the value of the specified 'rhs' object.

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
    MySequenceWithPrecisionDecimalAttribute& operator=(MySequenceWithPrecisionDecimalAttribute&& rhs);
        // Assign to this object the value of the specified 'rhs' object.
        // After performing this action, the 'rhs' object will be left in a
        // valid, but unspecified state.
#endif

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    bdlb::NullableValue<bdldfp::Decimal64>& attribute1();
        // Return a reference to the modifiable "Attribute1" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    const bdlb::NullableValue<bdldfp::Decimal64>& attribute1() const;
        // Return a reference offering non-modifiable access to the
        // "Attribute1" attribute of this object.
};

// FREE OPERATORS
inline
bool operator==(const MySequenceWithPrecisionDecimalAttribute& lhs, const MySequenceWithPrecisionDecimalAttribute& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const MySequenceWithPrecisionDecimalAttribute& lhs, const MySequenceWithPrecisionDecimalAttribute& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const MySequenceWithPrecisionDecimalAttribute& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDLAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_baltst::MySequenceWithPrecisionDecimalAttribute)

// ============================================================================
//                         INLINE FUNCTION DEFINITIONS
// ============================================================================

namespace s_baltst {

               // ---------------------------------------------
               // class MySequenceWithPrecisionDecimalAttribute
               // ---------------------------------------------

// CLASS METHODS
// MANIPULATORS
template <class MANIPULATOR>
int MySequenceWithPrecisionDecimalAttribute::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_attribute1, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ATTRIBUTE1]);
    if (ret) {
        return ret;
    }

    return 0;
}

template <class MANIPULATOR>
int MySequenceWithPrecisionDecimalAttribute::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ATTRIBUTE1: {
        return manipulator(&d_attribute1, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ATTRIBUTE1]);
      }
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int MySequenceWithPrecisionDecimalAttribute::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdlat_AttributeInfo *attributeInfo =
                                         lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
bdlb::NullableValue<bdldfp::Decimal64>& MySequenceWithPrecisionDecimalAttribute::attribute1()
{
    return d_attribute1;
}

// ACCESSORS
template <class ACCESSOR>
int MySequenceWithPrecisionDecimalAttribute::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_attribute1, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ATTRIBUTE1]);
    if (ret) {
        return ret;
    }

    return 0;
}

template <class ACCESSOR>
int MySequenceWithPrecisionDecimalAttribute::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ATTRIBUTE1: {
        return accessor(d_attribute1, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ATTRIBUTE1]);
      }
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int MySequenceWithPrecisionDecimalAttribute::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdlat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
const bdlb::NullableValue<bdldfp::Decimal64>& MySequenceWithPrecisionDecimalAttribute::attribute1() const
{
    return d_attribute1;
}

}  // close package namespace

// FREE FUNCTIONS

inline
bool s_baltst::operator==(
        const s_baltst::MySequenceWithPrecisionDecimalAttribute& lhs,
        const s_baltst::MySequenceWithPrecisionDecimalAttribute& rhs)
{
    return  lhs.attribute1() == rhs.attribute1();
}

inline
bool s_baltst::operator!=(
        const s_baltst::MySequenceWithPrecisionDecimalAttribute& lhs,
        const s_baltst::MySequenceWithPrecisionDecimalAttribute& rhs)
{
    return !(lhs == rhs);
}

inline
bsl::ostream& s_baltst::operator<<(
        bsl::ostream& stream,
        const s_baltst::MySequenceWithPrecisionDecimalAttribute& rhs)
{
    return rhs.print(stream, 0, -1);
}

}  // close enterprise namespace
#endif

// GENERATED BY @BLP_BAS_CODEGEN_VERSION@
// USING bas_codegen.pl s_baltst_mysequencewithprecisiondecimalattribute.xsd --mode msg --includedir . --msgComponent mysequencewithprecisiondecimalattribute --noRecurse --noExternalization --noHashSupport --noAggregateConversion
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright 2022 Bloomberg Finance L.P. All rights reserved.
//      Property of Bloomberg Finance L.P. (BFLP)
//      This software is made available solely pursuant to the
//      terms of a BFLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------
