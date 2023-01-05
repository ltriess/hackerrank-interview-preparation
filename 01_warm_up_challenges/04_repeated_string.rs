/*
Example 1:
    Input:
        aba
        10
    Output:
        7
    
Example 2:
    Input:
        a
        1000000000000
    Output:
        1000000000000
*/
use std::io::{self, BufRead};

fn main() {

    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();

    let s = iterator.next().unwrap().unwrap();
    let n = iterator.next().unwrap().unwrap().parse::<usize>().unwrap();

    let a_count = s.matches("a").count();
    let s_len = s.len();

    let count = n / s_len;
    let remainder = n - s_len * count;

    println!("{}", count *  a_count + s[..remainder].matches("a").count());
}
