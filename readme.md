### requriments:

- [qmk firmware](https://github.com/qmk/qmk_firmware)
- [lang_shift module](https://github.com/klavarog/lang_shift)

### install:

1. add lang_shift as submodule

    git submodule add https://github.com/klavarog/lang_shift ./mods
2. add files into keyboards dir
3. add secret.c file

    char td1_string[] = "";
4. see readme for keyboard