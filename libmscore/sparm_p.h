//=============================================================================
//  MusE Score
//  Linux Music Score Editor
//  $Id:$
//
//  Copyright (C) 2010 Werner Schweer and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================

#ifndef __SPARM_P_H__
#define __SPARM_P_H__

#include "sparm.h"

//---------------------------------------------------------
//   SyntiParameterData
//---------------------------------------------------------

class SyntiParameterData : public QSharedData {
   protected:
      int _id;
      QString _name;
      SyntiParameterType _type;
      float  _fval, _min, _max;
      QString _sval;

   public:
      SyntiParameterData();
      virtual ~SyntiParameterData() {}
      SyntiParameterData(const QString& name, float val);
      SyntiParameterData(int id, const QString& name, float);
      SyntiParameterData(const QString& name, const QString& val);
      SyntiParameterData(int id, const QString& name, const QString& val);
      SyntiParameterData(const SyntiParameterData& pd);

      virtual void write(Xml&) const;
      virtual bool operator==(const SyntiParameterData&) const;
      virtual void print() const;

      friend class SyntiParameter;
      };

#endif

