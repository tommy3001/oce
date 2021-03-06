// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_CartesianPoint_HeaderFile
#define _Geom2d_CartesianPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Geom2d_CartesianPoint.hxx>

#include <gp_Pnt2d.hxx>
#include <Geom2d_Point.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom2d_Geometry.hxx>
class gp_Pnt2d;
class gp_Trsf2d;
class Geom2d_Geometry;


//! Describes a point in 2D space. A
//! Geom2d_CartesianPoint is defined by a gp_Pnt2d
//! point, with its two Cartesian coordinates X and Y.
class Geom2d_CartesianPoint : public Geom2d_Point
{

public:

  
  //! Returns a persistent copy of P.
  Standard_EXPORT Geom2d_CartesianPoint(const gp_Pnt2d& P);
  
  Standard_EXPORT Geom2d_CartesianPoint(const Standard_Real X, const Standard_Real Y);
  
  //! Set <me> to X, Y coordinates.
  Standard_EXPORT   void SetCoord (const Standard_Real X, const Standard_Real Y) ;
  
  //! Set <me> to P.X(), P.Y() coordinates.
  Standard_EXPORT   void SetPnt2d (const gp_Pnt2d& P) ;
  
  //! Changes the X coordinate of me.
  Standard_EXPORT   void SetX (const Standard_Real X) ;
  
  //! Changes the Y coordinate of me.
  Standard_EXPORT   void SetY (const Standard_Real Y) ;
  
  //! Returns the coordinates of <me>.
  Standard_EXPORT   void Coord (Standard_Real& X, Standard_Real& Y)  const;
  

  //! Returns a non persistent cartesian point with
  //! the same coordinates as <me>.
  //! -C++: return const&
  Standard_EXPORT   gp_Pnt2d Pnt2d()  const;
  
  //! Returns the X coordinate of <me>.
  Standard_EXPORT   Standard_Real X()  const;
  
  //! Returns the Y coordinate of <me>.
  Standard_EXPORT   Standard_Real Y()  const;
  
  Standard_EXPORT   void Transform (const gp_Trsf2d& T) ;
  
  Standard_EXPORT   Handle(Geom2d_Geometry) Copy()  const;




  DEFINE_STANDARD_RTTI(Geom2d_CartesianPoint)

protected:




private: 


  gp_Pnt2d gpPnt2d;


};







#endif // _Geom2d_CartesianPoint_HeaderFile
