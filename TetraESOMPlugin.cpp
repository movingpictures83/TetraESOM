#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "TetraESOMPlugin.h"

void TetraESOMPlugin::input(std::string file) {
 inputfile = file;
}

void TetraESOMPlugin::run() {
std::string myCommand = "cd plugins/TetraESOM/Binning; perl esomWrapper.pl -path ../../../"+inputfile+" -ext fasta -d output -min 25";
system(myCommand.c_str());
}

void TetraESOMPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "cd plugins/TetraESOM/Binning; perl tetramer_freqs_esom.pl -f output/esom.fasta -a output/esom.ann -p ../../../"+file+" -min 25";
 system(myCommand.c_str());
}

PluginProxy<TetraESOMPlugin> TetraESOMPluginProxy = PluginProxy<TetraESOMPlugin>("TetraESOM", PluginManager::getInstance());
