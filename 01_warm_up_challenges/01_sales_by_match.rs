/*
Example:
    Input:
        9
        10 20 20 10 10 30 50 10 20
    Output:
        3
*/
use std::io::{self, BufRead};
use std::collections::HashMap;

fn main() {

    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();

    let n = iterator.next().unwrap().unwrap();

    let line = iterator.next().unwrap().unwrap();
    let colors: Vec<u32> = line.split_whitespace().map(|x| x.parse().expect("parse error")).collect();

    let mut map = HashMap::new();

    for color in colors {
        *map.entry(color).or_insert(0) += 1;
    }

    let mut pairs = 0;
    for (k, v) in map.iter() {
        pairs += v / 2;
    }

    println!("{}", pairs);
}
