##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PLEDuqueReyTian
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo
ProjectPath            :=C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/PLEDuqueReyTian
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tiand
Date                   :=6/4/2024
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/Aficionado.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/ControlDeportivo.cpp$(ObjectSuffix) $(IntermediateDirectory)/GestorDeportivo.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix): Arbol.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix): Cola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix) Cola.cpp

$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix): Lista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lista.cpp$(PreprocessSuffix) Lista.cpp

$(IntermediateDirectory)/Aficionado.cpp$(ObjectSuffix): Aficionado.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/Aficionado.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Aficionado.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Aficionado.cpp$(PreprocessSuffix): Aficionado.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Aficionado.cpp$(PreprocessSuffix) Aficionado.cpp

$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix): NodoArbol.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/NodoArbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoArbol.cpp$(PreprocessSuffix): NodoArbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoArbol.cpp$(PreprocessSuffix) NodoArbol.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix): Pila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix) Pila.cpp

$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp

$(IntermediateDirectory)/ControlDeportivo.cpp$(ObjectSuffix): ControlDeportivo.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/ControlDeportivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ControlDeportivo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ControlDeportivo.cpp$(PreprocessSuffix): ControlDeportivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ControlDeportivo.cpp$(PreprocessSuffix) ControlDeportivo.cpp

$(IntermediateDirectory)/GestorDeportivo.cpp$(ObjectSuffix): GestorDeportivo.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiand/OneDrive/Escritorio/ControlAccesoDeportivo/PLEDuqueReyTian/GestorDeportivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/GestorDeportivo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/GestorDeportivo.cpp$(PreprocessSuffix): GestorDeportivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/GestorDeportivo.cpp$(PreprocessSuffix) GestorDeportivo.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


