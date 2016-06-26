#ifdef __CINT__
 
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class AliAnalysisTaskRhoBase+;
#pragma link C++ class AliAnalysisTaskRho+;
#pragma link C++ class AliAnalysisTaskRhoFlow+;
#pragma link C++ class AliAnalysisTaskRhoAverage+;
#pragma link C++ class AliAnalysisTaskRhoMass+;
#pragma link C++ class AliAnalysisTaskRhoMassBase+;
#pragma link C++ class AliAnalysisTaskRhoSparse+;
#pragma link C++ class AliAnalysisTaskRhoMassSparse+;
#pragma link C++ class AliAnalysisTaskLocalRho+;
#pragma link C++ class AliAnalysisTaskDeltaPt+;
#pragma link C++ class AliAnalysisTaskScale+;
#pragma link C++ class AliEmcalJetByJetCorrection+;
#pragma link C++ class AliEmcalPicoTrackInGridMaker+;
#pragma link C++ class AliJetEmbeddingTask+;
#pragma link C++ class AliJetEmbeddingFromGenTask+;
#pragma link C++ class AliJetFastSimulation+;
#pragma link C++ class AliJetModelBaseTask+;
#pragma link C++ class AliJetModelCopyTracks+;
#pragma link C++ class AliJetModelMergeBranches+;
#pragma link C++ class AliJetRandomizerTask+;
#pragma link C++ class AliJetConstituentTagCopier+;
#pragma link C++ class AliJetResponseMaker+;
#pragma link C++ class AliJetTriggerSelectionTask+;
#pragma link C++ class AliAnalysisTaskEmcalJetQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectraQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPb+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryEmbedding+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP>+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPb>+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryEmbedding>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPb>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryEmbedding>+;

// user task
#pragma link C++ class AliAnalysisTaskBackFlucRandomCone+;
#pragma link C++ class AliAnalysisTaskCLQA+;
#pragma link C++ class AliAnalysisTaskChargedJetsPA+;
#pragma link C++ class AliAnalysisTaskChargedJetsHadronCF+;
#pragma link C++ class AliBasicJetConstituent+;
#pragma link C++ class AliBasicJet+;
#pragma link C++ class AliAnalysisTaskChargedJetsHadronToy+;
#pragma link C++ class AliAnalysisTaskDcalDijetPerf+;
#pragma link C++ class AliAnalysisTaskDeltaPtJEmb+;
#pragma link C++ class AliAnalysisTaskDijetHadron+;
#pragma link C++ class AliAnalysisTaskParticleRandomizer+;
#pragma link C++ class AliAnalysisTaskEmcalBadCells+;
#pragma link C++ class AliAnalysisTaskEmcalDiJetBase+;
#pragma link C++ class AliAnalysisTaskEmcalDiJetAna+;
#pragma link C++ class AliAnalysisTaskEmcalDiJetResponse+;
#pragma link C++ class AliAnalysisTaskEmcalHighMultTrigger+;
#pragma link C++ namespace EmcalHJetMassAnalysis+;
#pragma link C++ class EmcalHJetMassAnalysis::AliAnalysisTaskEmcalHJetMass+;
#pragma link C++ class AliAnalysisTaskEmcalJetHMEC+;
#pragma link C++ class AliAnalysisTaskEmcalJetCDF+;
#pragma link C++ namespace NS_AliAnalysisTaskEmcalJetCDF+;
#pragma link C++ class AliAnalysisTaskEmcalJetHadCorQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetHadEPpid+;
#pragma link C++ class AliAnalysisTaskEmcalJetMass+;
#pragma link C++ class AliAnalysisTaskEmcalJetMassBkg+;
#pragma link C++ class AliAnalysisTaskEmcalJetMassResponse+;
#pragma link C++ class AliAnalysisTaskEmcalJetMassStructure+;
#pragma link C++ class AliAnalysisTaskEmcalJetPatchTriggerQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetSample+;
#pragma link C++ class AliAnalysisTaskEmcalJetSparseMaker+;
#pragma link C++ class AliAnalysisTaskEmcalTmpSparseMaker+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectra+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectraMECpA;
#pragma link C++ class AliAnalysisTaskEmcalJetTagger+;
#pragma link C++ class AliAnalysisTaskEmcalJetTriggerMatcher+;
#pragma link C++ class AliAnalysisTaskEmcalJetTriggerQA+;
#pragma link C++ class AliAnalysisTaskEmcalQGTagging+;
#pragma link C++ class AliAnalysisTaskEmcalRun2QA+;
#pragma link C++ class AliAnalysisTaskFakeJets+;
#pragma link C++ class AliAnalysisTaskEmcalJetShapesMC+;
#pragma link C++ class AliAnalysisTaskEmcalMissingEnergy+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerPatchJetMatch+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerInfoQA+;
#pragma link C++ class AliAnalysisTaskHJetEmbed+;
#pragma link C++ class AliAnalysisTaskJetJTJT+;
#pragma link C++ class AliAnalysisTaskJetShapeBase+;
#pragma link C++ class AliAnalysisTaskJetShapeDeriv+;
#pragma link C++ class AliAnalysisTaskJetShapeConst+;
#pragma link C++ class AliAnalysisTaskJetShapeGR+;
#pragma link C++ class AliAnalysisTaskJetMassResponseDet+;
#pragma link C++ class AliAnalysisTaskJetMatching+;
#pragma link C++ class AliAnalysisTaskJetV2+;
#pragma link C++ class AliAnalysisTaskEmcalJetv2QA+;
#pragma link C++ class AliAnalysisTaskPrepareInputForEmbedding+;
#pragma link C++ class AliAnalysisTaskRhoMassScale+;
#pragma link C++ class AliAnalysisTaskSoftDrop+;
#pragma link C++ class AliAnalysisTaskSOH+;
#pragma link C++ class AliAnalysisTaskPi0Hadron+;
#pragma link C++ namespace JETriggerRejectionAna+;
#pragma link C++ class JETriggerRejectionAna::AliAnalysisTaskTriggerRejection+;
#pragma link C++ class AliAnalysisTaskV0sInJetsEmcal+;
#pragma link C++ class AliEmcalPicoTrackFromJetMaker+;
#pragma link C++ class AliNtupHetInfo+;
#pragma link C++ class AliNtupCumInfo+;
#pragma link C++ class AliNtupZdcInfo+;
#pragma link C++ namespace EMCalTriggerPtAnalysis+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliCutValueRange<float>+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliCutValueRange<double>+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliCutValueRange<int>+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEmcalTriggerOfflineSelection+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskPtEMCalTrigger+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskPtEMCalTriggerV1+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerExtraCuts+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerEventData+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerEventSelection+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerTaskGroup+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerTracksAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerBinningDimension+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerBinningComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerKineCuts+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaTriggerDecision+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaTriggerDecisionConfig+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerMCParticleAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerClusterAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerEventCounterAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerPatchAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerRecTrackAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerMCJetAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerRecJetAnalysisComponent+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerWeightHandler+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerPtHardWeight+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaClassManager+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaTriggerClass+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaPatternObject+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaPatternContainer+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEMCalTriggerAnaTriggerPatchTypeObject+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskTrackDCA+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEmcalAnalysisFactory+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskChargedParticlesRef+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskChargedParticlesRefMC+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEmcalClustersRef+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEmcalPatchesRef+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEmcalOnlinePatchesRef+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEmcalOfflinePatchesRef+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEventSelectionRef+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEMCALDCALTrigger2015+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEventFilter+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEtaPhiEfficiency+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskTrackDensity+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskTrackDensityData+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliEmcalTriggerEmulation+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskEmcalTriggerEmulation+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerTreeWriter+;
#pragma link C++ class AliAnalysisTaskParticleInJet+;
#pragma link C++ namespace HighPtTracks+;
#pragma link C++ class HighPtTracks::AliReducedHighPtEventCreator+;
#pragma link C++ class HighPtTracks::AliReducedClusterParticle+;
#pragma link C++ class HighPtTracks::AliReducedEmcalCluster+;
#pragma link C++ class HighPtTracks::AliReducedPatchInfo+;
#pragma link C++ class HighPtTracks::AliReducedPatchContainer+;
#pragma link C++ class HighPtTracks::AliReducedMCHeader+;
#pragma link C++ class HighPtTracks::AliReducedGeneratedParticle+;
#pragma link C++ class HighPtTracks::AliReducedReconstructedTrack+;
#pragma link C++ class HighPtTracks::AliReducedHighPtEvent+;
#pragma link C++ class HighPtTracks::AliReducedTrackSelectionContainer+;
#pragma link C++ class HighPtTracks::AliReducedJetEvent+;
#pragma link C++ class HighPtTracks::AliReducedJetInfo+;
#pragma link C++ class HighPtTracks::AliReducedJetParticle+;
#pragma link C++ class HighPtTracks::AliReducedJetConstituent+;
#pragma link C++ class HighPtTracks::AliReducedMatchedTrack+;
#pragma link C++ class AliAnalysisTaskJetsEvshape+;
#pragma link C++ class AliAnalysisTaskLEDCheck+;

#ifdef HAVE_FASTJET
#pragma link C++ class AliEmcalJetUtility+;
#pragma link C++ class AliEmcalJetUtilityGenSubtractor+;
#pragma link C++ class AliEmcalJetUtilityConstSubtractor+;
#pragma link C++ class AliEmcalJetUtilitySoftDrop+;
#pragma link C++ class AliEmcalJetTask+;
#pragma link C++ class AliEmcalJetFinder+;
#pragma link C++ class AliJetEmbeddingFromAODTask+;
#pragma link C++ class AliJetEmbeddingFromPYTHIATask+;
#pragma link C++ class AliAnalysisTaskFullpAJets+;
#pragma link C++ class AliAnalysisTaskFullppJet;
#pragma link C++ class AliAnalysisTaskHJetDphi+;
#pragma link C++ class AliAnalysisTaskHJetSpectra+;
#pragma link C++ class AliAnalysisTaskSubJetFraction+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskPtEfficiencyJets+;
#pragma link C++ class EMCalTriggerPtAnalysis::AliAnalysisTaskTracksInJet+;
#pragma link C++ class HighPtTracks::AliHighPtReconstructionEfficiency+;
#endif
#endif
