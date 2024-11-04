# Scheumine - Terminal Fire Animation

This project creates a terminal-based fire animation using C++. The inspiration for this project came from [this video](https://www.youtube.com/watch?v=RP_x_F7m1UI), and the animation has been enhanced with vibrant color effects for a more captivating experience.

## Features
- Dynamic, colorful ASCII fire animation in the terminal.
- Automatically adjusts to the width of the terminal window.
- The effect is displayed at the bottom of the terminal for an immersive look.

## Requirements
- A compiler that supports C++11 or higher (e.g., GCC, Clang, or Visual Studio).
- A POSIX-compatible terminal (Linux, macOS), or additional code modifications for Windows support.

## Installation and Running
### 1. Compile the Code
Use the following command to compile the project:
```bash
g++ -std=c++11 -o fire_animation main.cpp
```

### 2. Run the Program
To run the compiled program:
```bash
./scheumine
```

## Customization
- **Colors:** You can customize the fire colors by modifying the colorCodes array.
- **Width and Height:** Adjust the height constant to change the effect's density or performance.

## Inspiration

This project was inspired by the [Flame Effect in DOOM Fire](https://www.youtube.com/watch?v=RP_x_F7m1UI) video. The basic effect has been extended and enhanced with colors in C++.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contributing

Contributions and suggestions are welcome! Please submit a pull request or open an issue.

* * *

## Example ASCII Output
Here is an illustrative example of the ASCII fire animation:

```bash
                                      .
         .::....                   ..:;:.                                                         ....:...                   .::.                                           .::....            .     .::
........:;;l;;;;:.................::;lll;:......     .::.    ...           .:.     ..:...........::::;l;:::........       ..:;l;;:..            .::.      .:::::...      .::;;;;::::....:.....:::...:;;;
;;;;;;;;lltIttlll;:::::::::;;;;;;;;ltttttl;::;;::...:;l;;:..:::::.........:;l;:...:;;;;:::::::::;;;;ltItl;;;:::::;;:.....::;ltttll;::.     ....:;;;;::::::;;;l;;;:::....:;ltlllll;;;;::;;;:::;;;;::;llll
lllltttttI!!!!IIItllll;;;;lllllllltIIIIIIItl;;l;;;;;ltttll;:;;;;;;::::::::;ltl;::;lttlll;;;;;;;;llltI!|!Itlll;;;ltll;:::;;ltIIIIIttl;;::::::::;llllll;;;;llltttlll;;;:::;ltIItttttllll;;l;;;;;ll;;lttttt
tttIIIIIII!||||!!!ItttttttIItttttI!!!!!!!!!ItlllllltIIIIItl;llllttl;;;;;;;;ltl;;ltI!!ItttlllllllttII!|)|!IttllltI!Ittl;lltI!!!!!!!IItll;;;;;;ltIItttttlltttIIIIItttlllllttI!!IIIIIIttttllllllllllltI!!II
II!!!!!!!!!|))|||||!IIIIIIIIIIII!|)|||||||!!ItttttI!!!!!!ItltttIIIItlllltllltlltI!||||!IIIttttttI!!!!|)|!IItttI!|)|ItllltI|||||||||!!IttlllltI!!!!IIIItIII!!!!||!IIIttttIII!!!!!||!!I!!ItttttttttttI!!!!
!|||||||||||)))))))|!!!!!!!!!!!|)((()))))||!!I!II!|||||||!ItII!!!!!ItttI!IttttII!|)))))|!!!IIIII!!||||)|!!III!|)(()!ttttI!))))(())||||!IIttI!||||||!!!II!!|||))))|!!!III!!!!|||)))|!!!!!!IIIIIIIIII!!|||
|(())(())))))))))))|!!||||||||||)(}((((())||||)|!||)))))||!I!!|||||!!!!|)|!II!!|)((}}()))||!!!!||||))))||!!!|)((}}(|IttI!|)((((}()))))||!!I!|||||)))||!!!|))(}}(())))|!!|||||))(()||||||!!!||!!!!!!!||||
)}}}}}}(((()))))))||!!|))))|||||)}}(((((())))((()))(((())||!||))))))||)(()|!||)((}{]{}(()))|||)()))))))||||||)(}{{(|III!)(((())()))(())))|!!|||||)(()||||)(}{]]{}((((()|)))))))(())))))||))(())||!!!|||)
(}}{{{{}}}}(()))))|!!!|))))))|||(}}())((((((((}}(((}}}())))||)((((((((}}})|||(}}}{[[[{((((()|)(}}()))||))(()))}][]{()|!|({{}}())))))(((()|!!|||||))))||||)({]jj]{}}}}(()((}}((((((()))))(}}{{{}()||||)((
}(}{]]{}}}{{}())))|||||)))))()||)(())(((((}}}}}}(}{{]{()))())(}{}}}}}}{]{(|!)}]]{{[fj{((}{{()(}}}()))||)({{}()}[jjj]})|)}{]{}}(())))(}{}(|!!))||||)||!!!|)({][[[[{}((((}}}{{}}}((}()))(}{]]]]]]{}(())({]
]}}{[j[}}{[]]}())(((()||))))(})||)}}{{}()(}{}}{{{][jj[{()|)(((}]]{}}}}]j[}||(]jfj[jfj{(({[j]}(}(()||)|!)}{{{{}{[jtt[})))}{{}}{]]()(}][]{})!!))|!|)(|III!|(}{]]][[{()||({]]{{{{]{{{{})(}}{]]]]]]{}}}}(}][
]]{([Jf}}{{{{())|)}}})!I|}{}{{(It|{[][j{((}}(}}{[fffffj{)!|}})({[](|||({{}()){tUJJtttj]{][ff[{}}()||)))}{}{jtf{}]jj](||){[{}}{[j(|{ftfj[}||(}{{)!|(()|!I)][[{{][[{))||([tf[]]]][jjj[]]]{(}{}{]{()|({{(((
({f{)tU}|}|!{{|(]}!}[[}t|]jj]jj|)}(})]J]!{j{{J}!jBUtj{ff!|({j[ftJf))|((!}[})!IjBtJWffj{()jU[jj)!!}[]()}]f{I(JB]|{[{|IIt(tUf}[{}})))]})}j{t)fttWf{[J]{[]({j{Jf)]UJt]|I)jB&8U{){{}fJj[jj]||}]][J]!|{})]{(!
```
