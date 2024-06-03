// Showcase for all syntax constructs
// ^ comment

INCLUDE some/other/file.ink
// <- keyword
//             ^ string.special

LIST Things = (one), two, (three = 3)
// <- keyword
//   ^ type ^ operator
//              ^constructor ^constructor
//                    ^constructor
//                               ^ operator
//                                 ^ number

VAR some_bool = true
// <- keyword ^ operator
//  ^ variable    ^ boolean
CONST pi = 3.1  // good enough
// <- keyword   ^comment
//    ^ variable
//          ^ number

=== knot ===
// <- markup.heading
//  ^ markup.link.url
//       ^ markup.heading
# location: outside
// <- punctuation.delimiter
//      ^ attribute

I was outside, and I {some_bool == true:liked|hated} it.
//                   ^ punctuation.bracket         ^ punctuation.bracket
//                                     ^ punctuation.delimiter
//                                           ^ punctuation.delimiter

* I went [inside.], into the house and breathed a sigh of relief. # play: sigh{knot % 3}.mp3
// <- markup.list
//       ^ punctuation.bracket
//               ^ punctuation.bracket
//                                                                            ^ punctuation.bracket
//                                                                                     ^ punctuation.bracket
//                                                                              ^ variable
//                                                                                  ^ operator
//                                                                                    ^ number
* I went [to the guarden.# scary # imanintrovertlol] _around_ the garden and into the house.
* * I did some chores
    <- chores
* * I lay on my {&lazy|stupid|fat} derrière.
- - Ah … better.
// <- markup.list.unnumbered
//^ markup.list.unnumbered

- (in_house) The house was <>
// ^markup.link.url        ^ keyword
{shuffle stopping:
// ^ keyword ^keyword
//               ^punctuation.delimiter
- calming
// <- keyword
- soothing
- nice
}<>.

-> knot.stitch(-> END)
// <- markup.link
// ^ markup.link.url
//     ^ punctuation.delimiter
//      ^ markup.link.url
//                 ^ constant.builtin

-> stitch(-> in_house)
// <- markup.link
// ^ markup.link.url
//        ^ markup.link
//            ^ markup.link.url

= stitch(-> and_then)
// <- markup.heading
//  ^ markup.link.url
//       ^ markup.link
//         ^ variable.parameter
//             ^ markup.link.url

This stitch has <>{Things:
- one: one
- two: two
- three: three
- else: some
}<> thing{Things != one:s} going for it.

This is <>{some_bool == true:
good
- else:
bad
}<>, actually.

-> and_then

EXTERNAL invert_then_add(ref some_list, value)
// <- keyword            ^ keyword
//       ^ function          ^ varable.parameter
TODO: implement external function
// <- keyword  ^ comment
=== function invert_then_add(ref some_list, value)
// <- markup.heading ^ function
//  ^ keyword
~ LIST_INVERT(some_list)
// <- keyword
// ^ function.builtin
~ some_list += value
// ^ variable  ^ variable
//          ^ operator
~ return some_list
// ^ keyword ^ variable

=== chores ===
I cleaned the soap, aired out the trash and folded the stove.
->->
// <- markup.link
