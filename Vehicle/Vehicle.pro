#-------------------------------------------------
#
# Project created by QtCreator 2015-03-09T12:13:39
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Vehicle
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    car.cpp \
    bus.cpp \
    bicycle.cpp

HEADERS += \
    vehicle.h \
    motorvehicle.h \
    car.h \
    bus.h \
    bicycle.h
