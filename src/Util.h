#pragma once
#include "OCC.h"
#include "NodeV8.h"

void ReadDouble(const Handle<Value>& _v,double& value);

int ReadInt(Handle<Object> obj,const char* name,int defaultValue);
double ReadDouble(Handle<Object> obj,const char* name,double defaultValue=0.0);

void ReadPropertyPointFromArray( Handle<Array> value,double* x,double* y, double*z );
// void ReadPropertyPoint( Handle<Object> value,const char* name,double* x,double* y, double*z );

void ReadXYZ(Handle<Object> value,double* x,double* y,double* z);
void ReadUVW(Handle<Object> value,double* x,double* y,double* z);

void ReadPoint(Local<Value> value,double* x,double* y, double*z);
void ReadPoint(Local<v8::Value> value,gp_Pnt* pt);
void ReadDir(Local<v8::Value> value,gp_Dir* pt);
void ReadVector(Local<v8::Value> value,gp_Vec* pt);

void ReadRotationFromArgs(_NAN_METHOD_ARGS,gp_Trsf& trans);