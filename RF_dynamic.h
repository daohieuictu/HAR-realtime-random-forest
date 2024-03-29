#pragma once
#include <cstdarg>
namespace Eloquent1 {
    namespace ML1 {
        namespace Port1 {
            class RandomForest1 {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(double *x) {
                        uint8_t votes[5] = { 0 };
                        // tree #1
                        if (x[18] <= 0.2381592094898224) {
                            if (x[3] <= 0.9611714780330658) {
                                if (x[9] <= 0.7818603813648224) {
                                    if (x[2] <= -0.4744934141635895) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= -0.33536581695079803) {
                                if (x[6] <= 0.1887977570295334) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[8] <= 0.05791769549250603) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[19] <= 0.06335450895130634) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 0.22281667590141296) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[8] <= 0.09121427685022354) {
                            if (x[0] <= 1.0010762810707092) {
                                if (x[12] <= 0.7354736328125) {
                                    if (x[17] <= -0.4556884989142418) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 0.9582825005054474) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[14] <= -0.3040771782398224) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.15431315824389458) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[1] <= -0.2713277190923691) {
                                    if (x[0] <= 0.44075725972652435) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #3
                        if (x[6] <= 0.05354752391576767) {
                            if (x[3] <= 0.9611714780330658) {
                                if (x[12] <= 0.7354736328125) {
                                    if (x[2] <= -0.4742533564567566) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[15] <= 0.7847900688648224) {
                                if (x[18] <= 0.331787109375) {
                                    if (x[17] <= -0.025756865739822388) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #4
                        if (x[18] <= 0.2481689453125) {
                            if (x[11] <= 0.3111572414636612) {
                                if (x[3] <= 0.8716236054897308) {
                                    if (x[12] <= 0.17199706751853228) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 0.576892077922821) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[15] <= 0.6655273139476776) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[20] <= 0.3177490383386612) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[20] <= 0.3530273884534836) {
                            if (x[11] <= 0.3111572414636612) {
                                if (x[0] <= 1.0010762810707092) {
                                    if (x[4] <= 0.5809363573789597) {
                                        if (x[12] <= 0.6458740234375) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.6109883785247803) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 0.3937184810638428) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[13] <= -0.02246093237772584) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[7] <= 0.1723817065358162) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[18] <= 0.2528075873851776) {
                            if (x[17] <= 0.3094482272863388) {
                                if (x[11] <= -0.5763550102710724) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[15] <= 0.5505371578037739) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 0.6580039858818054) {
                                    if (x[5] <= 0.40433093905448914) {
                                        if (x[0] <= 0.5026570707559586) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.26212769001722336) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[2] <= -0.8020040094852448) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[15] <= 0.6586913913488388) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[13] <= -0.1218261606991291) {
                            if (x[15] <= 0.9427489936351776) {
                                if (x[13] <= -0.2518310621380806) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[11] <= -0.156005859375) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[9] <= 0.564453125) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 0.9615356624126434) {
                                if (x[10] <= -0.0853271521627903) {
                                    if (x[7] <= 0.0016054654843173921) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[17] <= 0.5971679985523224) {
                                        if (x[15] <= 0.4117431554477662) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[20] <= 0.4593505859375) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #8
                        if (x[6] <= 0.06533964723348618) {
                            if (x[12] <= 0.91015625) {
                                if (x[3] <= 0.7836895287036896) {
                                    if (x[15] <= 0.3476562201976776) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[13] <= -0.2518310621380806) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 0.9496460258960724) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[9] <= 1.0046387314796448) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 0.6602213680744171) {
                                if (x[20] <= 0.30541999638080597) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[6] <= 0.11546337604522705) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[16] <= 0.06933595985174179) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[15] <= 1.0301513671875) {
                            if (x[3] <= 0.9569196701049805) {
                                if (x[2] <= -0.7741048336029053) {
                                    if (x[16] <= -0.056396475061774254) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[20] <= 0.5955811142921448) {
                                        if (x[9] <= 0.6112671047449112) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[10] <= 0.4685058491304517) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[18] <= 0.22924811393022537) {
                                if (x[5] <= 0.293435737490654) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[8] <= 0.05791769549250603) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[6] <= 0.06176316738128662) {
                            if (x[17] <= 0.3094482272863388) {
                                if (x[9] <= 0.8778076469898224) {
                                    if (x[2] <= -0.4831583872437477) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[18] <= 0.020873948000371456) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[15] <= 0.6450194865465164) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[15] <= 0.8228760063648224) {
                                if (x[9] <= 0.5399170368909836) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 5; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }
