
GreedyICL <- function (adj_cube, allocations, hypers = NULL, max_n_iter = 100, verbose = FALSE) 
{
  if (is.null(hypers)) hypers <- list(eta0 = 0.5, zeta0 = 0.5, ap = 0.5, aq = 0.5, bp = 0.5, bq = 0.5, delta = 0.5)
  cpp_GreedyICL(adj_cube, allocations, max_n_iter, verbose, hypers$eta0, hypers$zeta0, hypers$ap, hypers$aq, hypers$bp, hypers$bq, hypers$delta)
}
  
