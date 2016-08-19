1. Горе след копчетата Build, Execute, Debug щракате дясно копче (някъде по празното) -> Configure Toolbars -> Main Toolbars<kdevelop> -> mainToolBar<kdevprojectmanagerview>
Щракате в/у 'Clean' -> със стрелката (надясно) го премествате отдясно при 'Build' -> Apply -> Ok. Копчето 'Clean' изпълнява командата clean: от makefile-a, аз съм я написал така, че 
да трие всички файлове с разширение .o и които завършват на ~ . Файловете .o са изпълнимите файлове и преди да ъплоуднете директорията щракнете Clean да ги изтрие (няма нужда от тях на drive)
Хубаво е да се чистят преди всеки нов 'make'. Файловете които завършват с ~ са старите (backup) версии на съществуващите, не ни трябват да правят боклук. Затова Clean трие и тях 
2. С 'Build' се компилира всичко както е описано във файла WorkingCode/makefile . Все едно пишете 'make' в WorkingCode директорията
3. Прочетете makefile-a в WorkingCode директорията, има много прост синтаксис - 

all: komanda_edno komanda_dve

komanda_edno:
      g++ nqkva_si_direktoriq/vashiq_file.cpp -o nqkva_si_direktoriq/vashata_programa.o

komanda_dve:
      g++ nqkva_si_druga_direktoriq/drug_vash_file.cpp -o nqkva_si_druga_direktoriq/druga_izpylnima_programa.o

И т.н., нищо особено. Командите като отделни имена са като поддиректориите, и компилират програмите в тях, т.е. съм ги разделил по директории (които пък са по раздели)
Като напишете нов файл в някоя директория добавете условието за компилиране под съответната му команда, за да си го компилирате с натискане на Build, примерно:
Трябва да добавите нов файл, в поддирентория homeworks/Functions с име divide.cpp , в който ще има функция дето прави нещо си.
Правите файла homeworks/Functions/divide.cpp и в homework/makefile добавяте:

functions:
    g++ Functions/divide.cpp -o Functions/divide.o

// след което добавяте командата functions най-отгоре след all: 

all: data_structures control_flow simple_examples functions
    
Пробвате с Build дали се компилира, ако файла е ок би трябвало. 
4. Над всеки makefile можете да видите имената на командите които са написани в този makefile. Дясно копче върху командата -> Build 
изпълнява само тази команда от makefile-a . Същото като да напишете в директорията където е makefile-a 
make command_name, промерно 'make clean', или 'make make_homeworks'. само 'make' е същото като 'make all'
