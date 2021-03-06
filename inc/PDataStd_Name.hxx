// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_Name_HeaderFile
#define _PDataStd_Name_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PDataStd_Name.hxx>

#include <Handle_PCollection_HExtendedString.hxx>
#include <PDF_Attribute.hxx>
class PCollection_HExtendedString;


class PDataStd_Name : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_Name();
  
  Standard_EXPORT PDataStd_Name(const Handle(PCollection_HExtendedString)& V);
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) Get()  const;
  
  Standard_EXPORT   void Set (const Handle(PCollection_HExtendedString)& V) ;

PDataStd_Name(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PCollection_HExtendedString) _CSFDB_GetPDataStd_NamemyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_NamemyValue(const Handle(PCollection_HExtendedString)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_Name)

protected:




private: 


  Handle(PCollection_HExtendedString) myValue;


};







#endif // _PDataStd_Name_HeaderFile
