
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQModelRoleDataSpan.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QModelRoleDataSpan>
#include <QModelRoleData>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QModelRoleDataSpan

//  Constructor QModelRoleDataSpan::QModelRoleDataSpan()


static void _init_ctor_QModelRoleDataSpan_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QModelRoleDataSpan> ();
}

static void _call_ctor_QModelRoleDataSpan_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelRoleDataSpan *> (new QModelRoleDataSpan ());
}


//  Constructor QModelRoleDataSpan::QModelRoleDataSpan(QModelRoleData &modelRoleData)


static void _init_ctor_QModelRoleDataSpan_1976 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modelRoleData");
  decl->add_arg<QModelRoleData & > (argspec_0);
  decl->set_return_new<QModelRoleDataSpan> ();
}

static void _call_ctor_QModelRoleDataSpan_1976 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QModelRoleData &arg1 = gsi::arg_reader<QModelRoleData & >() (args, heap);
  ret.write<QModelRoleDataSpan *> (new QModelRoleDataSpan (arg1));
}


//  Constructor QModelRoleDataSpan::QModelRoleDataSpan(QModelRoleData *modelRoleData, qsizetype len)


static void _init_ctor_QModelRoleDataSpan_3314 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modelRoleData");
  decl->add_arg<QModelRoleData * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return_new<QModelRoleDataSpan> ();
}

static void _call_ctor_QModelRoleDataSpan_3314 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QModelRoleData *arg1 = gsi::arg_reader<QModelRoleData * >() (args, heap);
  qsizetype arg2 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QModelRoleDataSpan *> (new QModelRoleDataSpan (arg1, arg2));
}


// QModelRoleData *QModelRoleDataSpan::begin()


static void _init_f_begin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QModelRoleData * > ();
}

static void _call_f_begin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelRoleData * > ((QModelRoleData *)((QModelRoleDataSpan *)cls)->begin ());
}


// QModelRoleData *QModelRoleDataSpan::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QModelRoleData * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelRoleData * > ((QModelRoleData *)((QModelRoleDataSpan *)cls)->data ());
}


// QVariant *QModelRoleDataSpan::dataForRole(int role)


static void _init_f_dataForRole_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("role");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QVariant * > ();
}

static void _call_f_dataForRole_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QVariant * > ((QVariant *)((QModelRoleDataSpan *)cls)->dataForRole (arg1));
}


// QModelRoleData *QModelRoleDataSpan::end()


static void _init_f_end_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QModelRoleData * > ();
}

static void _call_f_end_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelRoleData * > ((QModelRoleData *)((QModelRoleDataSpan *)cls)->end ());
}


// qsizetype QModelRoleDataSpan::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QModelRoleDataSpan *)cls)->length ());
}


// QModelRoleData &QModelRoleDataSpan::operator[](qsizetype index)


static void _init_f_operator_index__c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QModelRoleData & > ();
}

static void _call_f_operator_index__c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QModelRoleData & > ((QModelRoleData &)((QModelRoleDataSpan *)cls)->operator[] (arg1));
}


// qsizetype QModelRoleDataSpan::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QModelRoleDataSpan *)cls)->size ());
}



namespace gsi
{

static gsi::Methods methods_QModelRoleDataSpan () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QModelRoleDataSpan::QModelRoleDataSpan()\nThis method creates an object of class QModelRoleDataSpan.", &_init_ctor_QModelRoleDataSpan_0, &_call_ctor_QModelRoleDataSpan_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QModelRoleDataSpan::QModelRoleDataSpan(QModelRoleData &modelRoleData)\nThis method creates an object of class QModelRoleDataSpan.", &_init_ctor_QModelRoleDataSpan_1976, &_call_ctor_QModelRoleDataSpan_1976);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QModelRoleDataSpan::QModelRoleDataSpan(QModelRoleData *modelRoleData, qsizetype len)\nThis method creates an object of class QModelRoleDataSpan.", &_init_ctor_QModelRoleDataSpan_3314, &_call_ctor_QModelRoleDataSpan_3314);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method QModelRoleData *QModelRoleDataSpan::begin()\n", true, &_init_f_begin_c0, &_call_f_begin_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method QModelRoleData *QModelRoleDataSpan::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("dataForRole", "@brief Method QVariant *QModelRoleDataSpan::dataForRole(int role)\n", true, &_init_f_dataForRole_c767, &_call_f_dataForRole_c767);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method QModelRoleData *QModelRoleDataSpan::end()\n", true, &_init_f_end_c0, &_call_f_end_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method qsizetype QModelRoleDataSpan::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QModelRoleData &QModelRoleDataSpan::operator[](qsizetype index)\n", true, &_init_f_operator_index__c1442, &_call_f_operator_index__c1442);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qsizetype QModelRoleDataSpan::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  return methods;
}

gsi::Class<QModelRoleDataSpan> decl_QModelRoleDataSpan ("QtCore", "QModelRoleDataSpan",
  methods_QModelRoleDataSpan (),
  "@qt\n@brief Binding of QModelRoleDataSpan");


GSI_QTCORE_PUBLIC gsi::Class<QModelRoleDataSpan> &qtdecl_QModelRoleDataSpan () { return decl_QModelRoleDataSpan; }

}
