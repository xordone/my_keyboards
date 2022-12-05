### requriments:

- [qmk firmware](https://github.com/qmk/qmk_firmware)
- [lang_shift module](https://github.com/klavarog/lang_shift)

### install:

1. clone qmk firmware 
    git clone https://github.com/qmk/qmk_firmware
2. add lang_shift and this repo as submodule
    cd qmk_firmware
    
    git submodule add https://github.com/klavarog/lang_shift ./mods
    
    git submodule add https://github.com/xordone/my_keyboards 
3. add files into keyboards dir
    
    cp ./my_keyboards/* ./keboards
4. add secret.c file into

    ./keyboards/winry/winry25tc/keymaps/pxl/secret.c
    
    ./keyboards/annepro2/keymaps/1pxl/secret.c
    
        char td1_string[] = "";
5. see readme for keyboard