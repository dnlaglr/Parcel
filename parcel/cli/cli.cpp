#include <iostream>
#include <string>
#include <memory>
#include <algorithm>

#include "../cmd/abstractCommand.h"
#include "../cmd/helpCommand.h"

int main(int argc, char* argv[]) {
#ifdef PARCEL_DEBUG
  std::cout << "Argc: " << argc << ", Argv: [";
  for (int i = 0; i < argc; i++) {
    std::cout << i << ": '" << argv[i] << "', ";
  }
  std::cout << "]" << std::endl;
#endif

  if (argc >= 2) {
    std::string commandName(argv[1]);
    std::transform(commandName.begin(), commandName.end(), commandName.begin(), ::tolower);
    
    std::unique_ptr<Parcel::AbstractCommand> command;

    if (commandName == "help") {
      command = std::make_unique<Parcel::HelpCommand>();

      std::vector<std::string> args(argv + 1, argv + argc);
      if (args.empty()) {
        command->execute();
      } else {
        command->execute(args);
      }
    } else if (commandName == "install") {
      
    }
  } else {
    std::cerr << "[ Error ] Must specify a command. Use 'parcel help' to see a list of available commands." << std::endl;
    return 1;
  }

}